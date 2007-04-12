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

#ifndef ACTIVEMQ_TRANSPORT_IOTRANSPORTFACTORY_H_
#define ACTIVEMQ_TRANSPORT_IOTRANSPORTFACTORY_H_

#include <activemq/transport/TransportFactory.h>
#include <activemq/transport/TransportFactoryMapRegistrar.h>

namespace activemq{
namespace transport{

    /**
     * Manufactures IOTransports, which are objects that
     * read from input streams and write to output streams.
     */
    class IOTransportFactory : public TransportFactory{
    private:

        static TransportFactoryMapRegistrar registrar;

    public:

        virtual ~IOTransportFactory(){}

        /**
         * Creates a Transport instance.
         * @param properties - Object that will hold transport config values
         * @param next - the next transport in the chain, or NULL
         * @param own - does the new Transport own the next
         * @throws ActiveMQException if an error occurs.
         */
        virtual Transport* createTransport(
            const activemq::util::Properties& properties,
            Transport* next,
            bool own ) throw ( exceptions::ActiveMQException );

        /**
         * Returns a reference to this TransportFactory
         * @returns TransportFactory Reference
         */
        static TransportFactory& getInstance(void);

    };

}}

#endif /*ACTIVEMQ_TRANSPORT_IOTRANSPORTFACTORY_H_*/
