/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/cloudfront/model/Restrictions.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

Restrictions::Restrictions() : 
    m_geoRestrictionHasBeenSet(false)
{
}

Restrictions::Restrictions(const XmlNode& xmlNode) : 
    m_geoRestrictionHasBeenSet(false)
{
  *this = xmlNode;
}

Restrictions& Restrictions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode geoRestrictionNode = resultNode.FirstChild("GeoRestriction");
    if(!geoRestrictionNode.IsNull())
    {
      m_geoRestriction = geoRestrictionNode;
      m_geoRestrictionHasBeenSet = true;
    }
  }

  return *this;
}

void Restrictions::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_geoRestrictionHasBeenSet)
  {
   XmlNode geoRestrictionNode = parentNode.CreateChildElement("GeoRestriction");
   m_geoRestriction.AddToNode(geoRestrictionNode);
  }

}
