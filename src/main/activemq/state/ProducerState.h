/*
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _ACTIVEMQ_STATE_PRODUCERSTATE_H_
#define _ACTIVEMQ_STATE_PRODUCERSTATE_H_

#include <activemq/util/Config.h>

#include <activemq/commands/ProducerInfo.h>

#include <string>
#include <memory>

namespace activemq {
namespace state {

    class AMQCPP_API ProducerState {
    private:

        std::auto_ptr<commands::ProducerInfo> info;

    public:

        ProducerState( const commands::ProducerInfo* info );

        virtual ~ProducerState();

        std::string toString() const;

        const commands::ProducerInfo* getInfo() const {
            return this->info.get();
        }

    };

}}

#endif /*_ACTIVEMQ_STATE_PRODUCERSTATE_H_*/