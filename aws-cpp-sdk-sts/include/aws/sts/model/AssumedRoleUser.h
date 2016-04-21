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
#pragma once
#include <aws/sts/STS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace STS
{
namespace Model
{

  /**
   * <p>The identifiers for the temporary security credentials that the operation
   * returns. </p>
   */
  class AWS_STS_API AssumedRoleUser
  {
  public:
    AssumedRoleUser();
    AssumedRoleUser(const Aws::Utils::Xml::XmlNode& xmlNode);
    AssumedRoleUser& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>A unique identifier that contains the role ID and the role session name of
     * the role that is being assumed. The role ID is generated by AWS when the role is
     * created.</p>
     */
    inline const Aws::String& GetAssumedRoleId() const{ return m_assumedRoleId; }

    /**
     * <p>A unique identifier that contains the role ID and the role session name of
     * the role that is being assumed. The role ID is generated by AWS when the role is
     * created.</p>
     */
    inline void SetAssumedRoleId(const Aws::String& value) { m_assumedRoleIdHasBeenSet = true; m_assumedRoleId = value; }

    /**
     * <p>A unique identifier that contains the role ID and the role session name of
     * the role that is being assumed. The role ID is generated by AWS when the role is
     * created.</p>
     */
    inline void SetAssumedRoleId(Aws::String&& value) { m_assumedRoleIdHasBeenSet = true; m_assumedRoleId = value; }

    /**
     * <p>A unique identifier that contains the role ID and the role session name of
     * the role that is being assumed. The role ID is generated by AWS when the role is
     * created.</p>
     */
    inline void SetAssumedRoleId(const char* value) { m_assumedRoleIdHasBeenSet = true; m_assumedRoleId.assign(value); }

    /**
     * <p>A unique identifier that contains the role ID and the role session name of
     * the role that is being assumed. The role ID is generated by AWS when the role is
     * created.</p>
     */
    inline AssumedRoleUser& WithAssumedRoleId(const Aws::String& value) { SetAssumedRoleId(value); return *this;}

    /**
     * <p>A unique identifier that contains the role ID and the role session name of
     * the role that is being assumed. The role ID is generated by AWS when the role is
     * created.</p>
     */
    inline AssumedRoleUser& WithAssumedRoleId(Aws::String&& value) { SetAssumedRoleId(value); return *this;}

    /**
     * <p>A unique identifier that contains the role ID and the role session name of
     * the role that is being assumed. The role ID is generated by AWS when the role is
     * created.</p>
     */
    inline AssumedRoleUser& WithAssumedRoleId(const char* value) { SetAssumedRoleId(value); return *this;}

    /**
     * <p>The ARN of the temporary security credentials that are returned from the
     * <a>AssumeRole</a> action. For more information about ARNs and how to use them in
     * policies, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * Identifiers</a> in <i>Using IAM</i>. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the temporary security credentials that are returned from the
     * <a>AssumeRole</a> action. For more information about ARNs and how to use them in
     * policies, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * Identifiers</a> in <i>Using IAM</i>. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the temporary security credentials that are returned from the
     * <a>AssumeRole</a> action. For more information about ARNs and how to use them in
     * policies, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * Identifiers</a> in <i>Using IAM</i>. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the temporary security credentials that are returned from the
     * <a>AssumeRole</a> action. For more information about ARNs and how to use them in
     * policies, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * Identifiers</a> in <i>Using IAM</i>. </p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the temporary security credentials that are returned from the
     * <a>AssumeRole</a> action. For more information about ARNs and how to use them in
     * policies, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * Identifiers</a> in <i>Using IAM</i>. </p>
     */
    inline AssumedRoleUser& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the temporary security credentials that are returned from the
     * <a>AssumeRole</a> action. For more information about ARNs and how to use them in
     * policies, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * Identifiers</a> in <i>Using IAM</i>. </p>
     */
    inline AssumedRoleUser& WithArn(Aws::String&& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the temporary security credentials that are returned from the
     * <a>AssumeRole</a> action. For more information about ARNs and how to use them in
     * policies, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * Identifiers</a> in <i>Using IAM</i>. </p>
     */
    inline AssumedRoleUser& WithArn(const char* value) { SetArn(value); return *this;}

  private:
    Aws::String m_assumedRoleId;
    bool m_assumedRoleIdHasBeenSet;
    Aws::String m_arn;
    bool m_arnHasBeenSet;
  };

} // namespace Model
} // namespace STS
} // namespace Aws
