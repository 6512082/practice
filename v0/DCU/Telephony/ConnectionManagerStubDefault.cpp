/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.12.v201907221047.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include <v0/DCU/Telephony/ConnectionManagerStubDefault.hpp>
#include <assert.h>

namespace v0 {
namespace DCU {
namespace Telephony {

ConnectionManagerStubDefault::ConnectionManagerStubDefault():
        remoteEventHandler_(this),
        interfaceVersion_(ConnectionManager::getInterfaceVersion()) {
}

const CommonAPI::Version& ConnectionManagerStubDefault::getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> _client) {
    (void)_client;
    return interfaceVersion_;
}

ConnectionManagerStubRemoteEvent* ConnectionManagerStubDefault::initStubAdapter(const std::shared_ptr< ConnectionManagerStubAdapter> &_adapter) {
    CommonAPI::Stub<ConnectionManagerStubAdapter, ConnectionManagerStubRemoteEvent>::stubAdapter_ = _adapter;
    return &remoteEventHandler_;
}


/*
 * description: 
 * Deactivates all active contexts
 */
void ConnectionManagerStubDefault::DeactivateAll(const std::shared_ptr<CommonAPI::ClientId> _client, DeactivateAllReply_t _reply) {
    (void)_client;
    ::v0::DCU::Telephony::ConnectionContextTypes::ContextError error;
    _reply(error);
}

/*
 * description: 
 * Creates a new Primary context. The type contains the intended purpose of the context.
 */
void ConnectionManagerStubDefault::AddContext(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _APN, std::string _IP_Protocol, AddContextReply_t _reply) {
    (void)_client;
    (void)_APN;
    (void)_IP_Protocol;
    ::v0::DCU::Telephony::ConnectionContextTypes::AddContextError error;
    std::string ContextID = "";
    _reply(error, ContextID);
}

/*
 * description: 
 * Removes a primary context. All secondary contexts,
 * if any, associated with the primary context are also removed.
 */
void ConnectionManagerStubDefault::RemoveContext(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _ContextID, RemoveContextReply_t _reply) {
    (void)_client;
    (void)_ContextID;
    ::v0::DCU::Telephony::ConnectionContextTypes::RemoveContextError error;
    _reply(error);
}

/*
 * description: 
 * Gets the registered connection contexts on the modem.
 */
void ConnectionManagerStubDefault::GetContexts(const std::shared_ptr<CommonAPI::ClientId> _client, GetContextsReply_t _reply) {
    (void)_client;
    std::vector< ::v0::DCU::Telephony::ConnectionContextTypes::ConnectionContextItem > items = {};
    _reply(items);
}

/*
 * description: 
 * Gets the registered connection context wite ContextID on the modem.
 */
void ConnectionManagerStubDefault::GetContext(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _ContextID, GetContextReply_t _reply) {
    (void)_client;
    (void)_ContextID;
    ::v0::DCU::Telephony::ConnectionContextTypes::GetContextError error;
    ::v0::DCU::Telephony::ConnectionContextTypes::ConnectionContextItem item = {};
    _reply(error, item);
}


/*
 * description: 
 * This event indicates that the ConnectionContext has added.
 */
void ConnectionManagerStubDefault::fireContextAddedEvent(const std::string &_ContextID, const ::v0::DCU::Telephony::ConnectionContextTypes::ConnectionContextItem &_item) {
    ConnectionManagerStub::fireContextAddedEvent(_ContextID, _item);
}
/*
 * description: 
 * This event indicates that the ConnectionContext has removed
 */
void ConnectionManagerStubDefault::fireContextRemovedEvent(const std::string &_ContextID) {
    ConnectionManagerStub::fireContextRemovedEvent(_ContextID);
}


ConnectionManagerStubDefault::RemoteEventHandler::RemoteEventHandler(ConnectionManagerStubDefault *_defaultStub)
    : 
      defaultStub_(_defaultStub) {
}

} // namespace Telephony
} // namespace DCU
} // namespace v0
