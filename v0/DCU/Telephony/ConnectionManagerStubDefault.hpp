/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.12.v201907221047.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V0_DCU_TELEPHONY_Connection_Manager_STUB_DEFAULT_HPP_
#define V0_DCU_TELEPHONY_Connection_Manager_STUB_DEFAULT_HPP_


#include <CommonAPI/Export.hpp>

#include <v0/DCU/Telephony/ConnectionManagerStub.hpp>
#include <sstream>

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

/**
 * Provides a default implementation for ConnectionManagerStubRemoteEvent and
 * ConnectionManagerStub. Method callbacks have an empty implementation,
 * remote set calls on attributes will always change the value of the attribute
 * to the one received.
 *
 * Override this stub if you only want to provide a subset of the functionality
 * that would be defined for this service, and/or if you do not need any non-default
 * behaviour.
 */
class COMMONAPI_EXPORT_CLASS_EXPLICIT ConnectionManagerStubDefault
    : public virtual ConnectionManagerStub {
public:
    COMMONAPI_EXPORT ConnectionManagerStubDefault();

    COMMONAPI_EXPORT ConnectionManagerStubRemoteEvent* initStubAdapter(const std::shared_ptr< ConnectionManagerStubAdapter> &_adapter);

    COMMONAPI_EXPORT const CommonAPI::Version& getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> _client);


    /*
     * description: 
     * Deactivates all active contexts
     */
    COMMONAPI_EXPORT virtual void DeactivateAll(const std::shared_ptr<CommonAPI::ClientId> _client, DeactivateAllReply_t _reply);
    /*
     * description: 
     * Creates a new Primary context. The type contains the intended purpose of the context.
     */
    COMMONAPI_EXPORT virtual void AddContext(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _APN, std::string _IP_Protocol, AddContextReply_t _reply);
    /*
     * description: 
     * Removes a primary context. All secondary contexts,
     * if any, associated with the primary context are also removed.
     */
    COMMONAPI_EXPORT virtual void RemoveContext(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _ContextID, RemoveContextReply_t _reply);
    /*
     * description: 
     * Gets the registered connection contexts on the modem.
     */
    COMMONAPI_EXPORT virtual void GetContexts(const std::shared_ptr<CommonAPI::ClientId> _client, GetContextsReply_t _reply);
    /*
     * description: 
     * Gets the registered connection context wite ContextID on the modem.
     */
    COMMONAPI_EXPORT virtual void GetContext(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _ContextID, GetContextReply_t _reply);

    /*
     * description: 
     * This event indicates that the ConnectionContext has added.
     */
    COMMONAPI_EXPORT virtual void fireContextAddedEvent(const std::string &_ContextID, const ::v0::DCU::Telephony::CommonTypes::ConnectionContextItem &_item);
    /*
     * description: 
     * This event indicates that the ConnectionContext has removed
     */
    COMMONAPI_EXPORT virtual void fireContextRemovedEvent(const std::string &_ContextID);

    
protected:
    class COMMONAPI_EXPORT_CLASS_EXPLICIT RemoteEventHandler: public virtual ConnectionManagerStubRemoteEvent {
    public:
        COMMONAPI_EXPORT RemoteEventHandler(ConnectionManagerStubDefault *_defaultStub);


    private:
        ConnectionManagerStubDefault *defaultStub_;
    };
protected:
    ConnectionManagerStubDefault::RemoteEventHandler remoteEventHandler_;

private:


    CommonAPI::Version interfaceVersion_;
};

} // namespace Telephony
} // namespace DCU
} // namespace v0


// Compatibility
namespace v0_93 = v0;

#endif // V0_DCU_TELEPHONY_Connection_Manager_STUB_DEFAULT
