/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.someip 3.1.12.v201907221223.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V0_DCU_TELEPHONY_CONNECTION_MANAGER_SOMEIP_PROXY_HPP_
#define V0_DCU_TELEPHONY_CONNECTION_MANAGER_SOMEIP_PROXY_HPP_

#include <v0/DCU/Telephony/ConnectionManagerProxyBase.hpp>
#include <v0/DCU/Telephony/ConnectionContextTypesSomeIPDeployment.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/SomeIP/Factory.hpp>
#include <CommonAPI/SomeIP/Proxy.hpp>
#include <CommonAPI/SomeIP/Types.hpp>
#include <CommonAPI/SomeIP/Event.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

#include <string>

# if defined(_MSC_VER)
#  if _MSC_VER >= 1300
/*
 * Diamond inheritance is used for the CommonAPI::Proxy base class.
 * The Microsoft compiler put warning (C4250) using a desired c++ feature: "Delegating to a sister class"
 * A powerful technique that arises from using virtual inheritance is to delegate a method from a class in another class
 * by using a common abstract base class. This is also called cross delegation.
 */
#    pragma warning( disable : 4250 )
#  endif
# endif

namespace v0 {
namespace DCU {
namespace Telephony {

class ConnectionManagerSomeIPProxy
    : virtual public ConnectionManagerProxyBase,
    virtual public CommonAPI::SomeIP::Proxy {
public:
    ConnectionManagerSomeIPProxy(
        const CommonAPI::SomeIP::Address &_address,
        const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection);

    virtual ~ConnectionManagerSomeIPProxy() { }


    virtual ContextAddedEvent& getContextAddedEvent();
    virtual ContextRemovedEvent& getContextRemovedEvent();

    /*
     * description: 
     * Deactivates all active contexts
     */
    virtual void DeactivateAll(CommonAPI::CallStatus &_internalCallStatus, ::v0::DCU::Telephony::ConnectionContextTypes::ContextError &_error, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> DeactivateAllAsync(DeactivateAllAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /*
     * description: 
     * Creates a new Primary context. The type contains the intended purpose of the context.
     */
    virtual void AddContext(const std::string &_APN, const std::string &_IP_Protocol, CommonAPI::CallStatus &_internalCallStatus, ::v0::DCU::Telephony::ConnectionContextTypes::AddContextError &_error, std::string &_ContextID, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> AddContextAsync(const std::string &_APN, const std::string &_IP_Protocol, AddContextAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /*
     * description: 
     * Removes a primary context. All secondary contexts,
     * if any, associated with the primary context are also removed.
     */
    virtual void RemoveContext(const std::string &_ContextID, CommonAPI::CallStatus &_internalCallStatus, ::v0::DCU::Telephony::ConnectionContextTypes::RemoveContextError &_error, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> RemoveContextAsync(const std::string &_ContextID, RemoveContextAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /*
     * description: 
     * Gets the registered connection contexts on the modem.
     */
    virtual void GetContexts(CommonAPI::CallStatus &_internalCallStatus, std::vector< ::v0::DCU::Telephony::ConnectionContextTypes::ConnectionContextItem > &_items, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> GetContextsAsync(GetContextsAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /*
     * description: 
     * Gets the registered connection context wite ContextID on the modem.
     */
    virtual void GetContext(const std::string &_ContextID, CommonAPI::CallStatus &_internalCallStatus, ::v0::DCU::Telephony::ConnectionContextTypes::GetContextError &_error, ::v0::DCU::Telephony::ConnectionContextTypes::ConnectionContextItem &_item, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> GetContextAsync(const std::string &_ContextID, GetContextAsyncCallback _callback, const CommonAPI::CallInfo *_info);


    virtual void getOwnVersion(uint16_t &_major, uint16_t &_minor) const;

private:


     CommonAPI::SomeIP::Event<ContextAddedEvent, CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment >, CommonAPI::Deployable< ::v0::DCU::Telephony::ConnectionContextTypes::ConnectionContextItem, ::v0::DCU::Telephony::ConnectionContextTypes_::ConnectionContextItemDeployment_t >> contextAdded_;
     CommonAPI::SomeIP::Event<ContextRemovedEvent, CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment >> contextRemoved_;

};

} // namespace Telephony
} // namespace DCU
} // namespace v0

#endif // V0_DCU_TELEPHONY_Connection_Manager_SOMEIP_PROXY_HPP_