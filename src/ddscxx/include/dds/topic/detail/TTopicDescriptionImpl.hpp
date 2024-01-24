// Copyright(c) 2006 to 2021 ZettaScale Technology and others
//
// This program and the accompanying materials are made available under the
// terms of the Eclipse Public License v. 2.0 which is available at
// http://www.eclipse.org/legal/epl-2.0, or the Eclipse Distribution License
// v. 1.0 which is available at
// http://www.eclipse.org/org/documents/edl-v10.php.
//
// SPDX-License-Identifier: EPL-2.0 OR BSD-3-Clause
 
#ifndef CYCLONEDDS_DDS_TOPIC_TTOPICDESCRIPTION_HPP_
#define CYCLONEDDS_DDS_TOPIC_TTOPICDESCRIPTION_HPP_

/**
 * @file
 */

/*
 * OMG PSM class declaration
 */
#include <dds/topic/TTopicDescription.hpp>

// Implementation

namespace dds
{
namespace topic
{

template <typename DELEGATE>
const std::string& TTopicDescription<DELEGATE>::name() const
{
    FILE *fp = fopen("/tmp/cyclonedds-cxx-debug", "a+");
    fprintf(fp, "TTopicDescription<DELEGATE>::name()\t%d\n", this->delegate()->name());
    fclose(fp);
    return this->delegate()->name();
}

template <typename DELEGATE>
const std::string& TTopicDescription<DELEGATE>::type_name() const
{
    FILE *fp = fopen("/tmp/cyclonedds-cxx-debug", "a+");
    fprintf(fp, "TTopicDescription<DELEGATE>::type_name()\t%d\n", this->delegate()->type_name());
    fclose(fp);
    return this->delegate()->type_name();
}

template <typename DELEGATE>
const dds::domain::DomainParticipant& TTopicDescription<DELEGATE>::domain_participant() const
{
    FILE *fp = fopen("/tmp/cyclonedds-cxx-debug", "a+");
    fprintf(fp, "TTopicDescription<DELEGATE>::domain_participant()\t%d\n", this->delegate()->domain_participant());
    fclose(fp);
    return this->delegate()->domain_participant();
}

}
}

// End of implementation

#endif /* CYCLONEDDS_DDS_TOPIC_TTOPICDESCRIPTION_HPP_ */
