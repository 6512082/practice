/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.12.v201907221047.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V0_DCU_TELEPHONY_Connection_Manager_PROXY_HPP_
#define V0_DCU_TELEPHONY_Connection_Manager_PROXY_HPP_

#include <v0/DCU/Telephony/ConnectionManagerProxyBase.hpp>


#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif


#undef COMMONAPI_INTERNAL_COMPILATION

namespace v0 {
namespace DCU {
namespace Telephony {

template <typename ... _AttributeExtensions>
class ConnectionManagerProxy
    : virtual public ConnectionManager,
      virtual public ConnectionManagerProxyBase,
      virtual public _AttributeExtensions... {
public:
    ConnectionManagerProxy(std::shared_ptr<CommonAPI::Proxy> delegate);
    ~ConnectionManagerProxy();

    typedef ConnectionManager InterfaceType;



    /*
     * description: 
     * This event indicates that the ConnectionContext has added.
     */
    /**
     * Returns the wrapper class that provides access to the broadcast ContextAdded.
     */
    virtual ContextAddedEvent& getContextAddedEvent() {
        return delegate_->getContextAddedEvent();
    }
    /*
     * description: 
     * This event indicates that the ConnectionContext has removed
     */
    /**
     * Returns the wrapper class that provides access to the broadcast ContextRemoved.
     */
    virtual ContextRemovedEvent& getContextRemovedEvent() {
        return delegate_->getContextRemovedEvent();
    }

    /**
     * description: 
     * Deactivates all active contexts
     * Calls DeactivateAll with synchronous semantics.
     *
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void DeactivateAll(CommonAPI::CallStatus &_internalCallStatus, ::v0::DCU::Telephony::ConnectionContextTypes::ContextError &_error, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls DeactivateAll with asynchronous semantics.
     *
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> DeactivateAllAsync(DeactivateAllAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: 
     * Creates a new Primary context. The type contains the intended purpose of the context.
     * Calls AddContext with synchronous semantics.
     *
    * All const parameters are input parameters to this method.
    * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void AddContext(const std::string &_APN, const std::string &_IP_Protocol, CommonAPI::CallStatus &_internalCallStatus, ::v0::DCU::Telephony::ConnectionContextTypes::AddContextError &_error, std::string &_ContextID, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls AddContext with asynchronous semantics.
     *
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> AddContextAsync(const std::string &_APN, const std::string &_IP_Protocol, AddContextAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: 
     * Removes a primary context. All secondary contexts,
     * if any, associated with the primary context are also removed.
     * Calls RemoveContext with synchronous semantics.
     *
    * All const parameters are input parameters to this method.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void RemoveContext(const std::string &_ContextID, CommonAPI::CallStatus &_internalCallStatus, ::v0::DCU::Telephony::ConnectionContextTypes::RemoveContextError &_error, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls RemoveContext with asynchronous semantics.
     *
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> RemoveContextAsync(const std::string &_ContextID, RemoveContextAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: 
     * Gets the registered connection contexts on the modem.
     * Calls GetContexts with synchronous semantics.
     *
    * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void GetContexts(CommonAPI::CallStatus &_internalCallStatus, std::vector< ::v0::DCU::Telephony::ConnectionContextTypes::ConnectionContextItem > &_items, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls GetContexts with asynchronous semantics.
     *
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> GetContextsAsync(GetContextsAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: 
     * Gets the registered connection context wite ContextID on the modem.
     * Calls GetContext with synchronous semantics.
     *
    * All const parameters are input parameters to this method.
    * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void GetContext(const std::string &_ContextID, CommonAPI::CallStatus &_internalCallStatus, ::v0::DCU::Telephony::ConnectionContextTypes::GetContextError &_error, ::v0::DCU::Telephony::ConnectionContextTypes::ConnectionContextItem &_item, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls GetContext with asynchronous semantics.
     *
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> GetContextAsync(const std::string &_ContextID, GetContextAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);


    /**
     * Returns the CommonAPI address of the remote partner this proxy communicates with.
     */
    virtual const CommonAPI::Address &getAddress() const;

    /**
     * Returns true if the remote partner for this proxy is currently known to be available.
     */
    virtual bool isAvailable() const;

    /**
     * Returns true if the remote partner for this proxy is available.
     */
    virtual bool isAvailableBlocking() const;

    /**
     * Returns the wrapper class that is used to (de-)register for notifications about
     * the availability of the remote partner of this proxy.
     */
    virtual CommonAPI::ProxyStatusEvent& getProxyStatusEvent();

    /**
     * Returns the wrapper class that is used to access version information of the remote
     * partner of this proxy.
     */
    virtual CommonAPI::InterfaceVersionAttribute& getInterfaceVersionAttribute();

 private:
    std::shared_ptr< ConnectionManagerProxyBase> delegate_;
};

typedef ConnectionManagerProxy<> ConnectionManagerProxyDefault;


//
// ConnectionManagerProxy Implementation
//
template <typename ... _AttributeExtensions>
ConnectionManagerProxy<_AttributeExtensions...>::ConnectionManagerProxy(std::shared_ptr<CommonAPI::Proxy> delegate):
        _AttributeExtensions(*(std::dynamic_pointer_cast< ConnectionManagerProxyBase>(delegate)))...,
        delegate_(std::dynamic_pointer_cast< ConnectionManagerProxyBase>(delegate)) {
}

template <typename ... _AttributeExtensions>
ConnectionManagerProxy<_AttributeExtensions...>::~ConnectionManagerProxy() {
}

/*
 * description: 
 * Deactivates all active contexts
 */
template <typename ... _AttributeExtensions>
void ConnectionManagerProxy<_AttributeExtensions...>::DeactivateAll(CommonAPI::CallStatus &_internalCallStatus, ::v0::DCU::Telephony::ConnectionContextTypes::ContextError &_error, const CommonAPI::CallInfo *_info) {
    delegate_->DeactivateAll(_internalCallStatus, _error, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> ConnectionManagerProxy<_AttributeExtensions...>::DeactivateAllAsync(DeactivateAllAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->DeactivateAllAsync(_callback, _info);
}
/*
 * description: 
 * Creates a new Primary context. The type contains the intended purpose of the context.
 */
template <typename ... _AttributeExtensions>
void ConnectionManagerProxy<_AttributeExtensions...>::AddContext(const std::string &_APN, const std::string &_IP_Protocol, CommonAPI::CallStatus &_internalCallStatus, ::v0::DCU::Telephony::ConnectionContextTypes::AddContextError &_error, std::string &_ContextID, const CommonAPI::CallInfo *_info) {
    delegate_->AddContext(_APN, _IP_Protocol, _internalCallStatus, _error, _ContextID, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> ConnectionManagerProxy<_AttributeExtensions...>::AddContextAsync(const std::string &_APN, const std::string &_IP_Protocol, AddContextAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->AddContextAsync(_APN, _IP_Protocol, _callback, _info);
}
/*
 * description: 
 * Removes a primary context. All secondary contexts,
 * if any, associated with the primary context are also removed.
 */
template <typename ... _AttributeExtensions>
void ConnectionManagerProxy<_AttributeExtensions...>::RemoveContext(const std::string &_ContextID, CommonAPI::CallStatus &_internalCallStatus, ::v0::DCU::Telephony::ConnectionContextTypes::RemoveContextError &_error, const CommonAPI::CallInfo *_info) {
    delegate_->RemoveContext(_ContextID, _internalCallStatus, _error, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> ConnectionManagerProxy<_AttributeExtensions...>::RemoveContextAsync(const std::string &_ContextID, RemoveContextAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->RemoveContextAsync(_ContextID, _callback, _info);
}
/*
 * description: 
 * Gets the registered connection contexts on the modem.
 */
template <typename ... _AttributeExtensions>
void ConnectionManagerProxy<_AttributeExtensions...>::GetContexts(CommonAPI::CallStatus &_internalCallStatus, std::vector< ::v0::DCU::Telephony::ConnectionContextTypes::ConnectionContextItem > &_items, const CommonAPI::CallInfo *_info) {
    delegate_->GetContexts(_internalCallStatus, _items, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> ConnectionManagerProxy<_AttributeExtensions...>::GetContextsAsync(GetContextsAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->GetContextsAsync(_callback, _info);
}
/*
 * description: 
 * Gets the registered connection context wite ContextID on the modem.
 */
template <typename ... _AttributeExtensions>
void ConnectionManagerProxy<_AttributeExtensions...>::GetContext(const std::string &_ContextID, CommonAPI::CallStatus &_internalCallStatus, ::v0::DCU::Telephony::ConnectionContextTypes::GetContextError &_error, ::v0::DCU::Telephony::ConnectionContextTypes::ConnectionContextItem &_item, const CommonAPI::CallInfo *_info) {
    delegate_->GetContext(_ContextID, _internalCallStatus, _error, _item, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> ConnectionManagerProxy<_AttributeExtensions...>::GetContextAsync(const std::string &_ContextID, GetContextAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->GetContextAsync(_ContextID, _callback, _info);
}

template <typename ... _AttributeExtensions>
const CommonAPI::Address &ConnectionManagerProxy<_AttributeExtensions...>::getAddress() const {
    return delegate_->getAddress();
}

template <typename ... _AttributeExtensions>
bool ConnectionManagerProxy<_AttributeExtensions...>::isAvailable() const {
    return delegate_->isAvailable();
}

template <typename ... _AttributeExtensions>
bool ConnectionManagerProxy<_AttributeExtensions...>::isAvailableBlocking() const {
    return delegate_->isAvailableBlocking();
}

template <typename ... _AttributeExtensions>
CommonAPI::ProxyStatusEvent& ConnectionManagerProxy<_AttributeExtensions...>::getProxyStatusEvent() {
    return delegate_->getProxyStatusEvent();
}

template <typename ... _AttributeExtensions>
CommonAPI::InterfaceVersionAttribute& ConnectionManagerProxy<_AttributeExtensions...>::getInterfaceVersionAttribute() {
    return delegate_->getInterfaceVersionAttribute();
}


} // namespace Telephony
} // namespace DCU
} // namespace v0



// Compatibility
namespace v0_93 = v0;

#endif // V0_DCU_TELEPHONY_Connection_Manager_PROXY_HPP_