/*
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include <activemq/connector/openwire/commands/ControlCommand.h>

using namespace std;
using namespace activemq;
using namespace activemq::connector;
using namespace activemq::connector::openwire;
using namespace activemq::connector::openwire::commands;

/*
 *
 *  Command and marshalling code for OpenWire format for ControlCommand
 *
 *
 *  NOTE!: This file is autogenerated - do not modify!
 *         if you need to make a change, please see the Java Classes in the
 *         activemq-core module
 *
 */
////////////////////////////////////////////////////////////////////////////////
ControlCommand::ControlCommand()
{
    this->command = "";
}

////////////////////////////////////////////////////////////////////////////////
ControlCommand::~ControlCommand()
{
}

////////////////////////////////////////////////////////////////////////////////
ControlCommand* ControlCommand::clone() const {
    ControlCommand* controlCommand = new ControlCommand();

    // Copy the data from the base class or classes
    BaseCommand::copy( controlCommand );

    controlCommand->command = this->getCommand();

    return controlCommand
}

////////////////////////////////////////////////////////////////////////////////
void ControlCommand::copy( ControlCommand* dest ) const {

    // Copy the data from the base class or classes
    BaseCommand::copy( controlCommand );

    dest->setCommand( this->getCommand() );
}

////////////////////////////////////////////////////////////////////////////////
unsigned char ControlCommand::getDataStructureType() const {
    return ControlCommand::ID_CONTROLCOMMAND; 
}

////////////////////////////////////////////////////////////////////////////////
const std::string& ControlCommand::getCommand() const {
    return command;
}

////////////////////////////////////////////////////////////////////////////////
std::string& ControlCommand::getCommand() {
    return command;
}

////////////////////////////////////////////////////////////////////////////////
void ControlCommand::setCommand(const std::string& command ) {
    this->command = command;
}

