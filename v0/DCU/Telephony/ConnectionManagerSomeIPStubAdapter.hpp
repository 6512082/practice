/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.someip 3.1.12.v201907221223.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V0_DCU_TELEPHONY_CONNECTION_MANAGER_SOMEIP_STUB_ADAPTER_HPP_
#define V0_DCU_TELEPHONY_CONNECTION_MANAGER_SOMEIP_STUB_ADAPTER_HPP_

#include <v0/DCU/Telephony/ConnectionManagerStub.hpp>
#include <v0/DCU/Telephony/CommonTypesSomeIPDeployment.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/SomeIP/AddressTranslator.hpp>
#include <CommonAPI/SomeIP/StubAdapterHelper.hpp>
#include <CommonAPI/SomeIP/StubAdapter.hpp>
#include <CommonAPI/SomeIP/Factory.hpp>
#include <CommonAPI/SomeIP/Types.hpp>
#include <CommonAPI/SomeIP/Constants.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v0 {
namespace DCU {
namespace Telephony {

template <typename _Stub = ::v0::DCU::Telephony::ConnectionManagerStub, typename... _Stubs>
class ConnectionManagerSomeIPStubAdapterInternal
    : public virtual ConnectionManagerStubAdapter,
      public CommonAPI::SomeIP::StubAdapterHelper< _Stub, _Stubs...>
{
public:
    typedef CommonAPI::SomeIP::StubAdapterHelper< _Stub, _Stubs...> ConnectionManagerSomeIPStubAdapterHelper;

    ~ConnectionManagerSomeIPStubAdapterInternal() {
        deactivateManagedInstances();
        ConnectionManagerSomeIPStubAdapterHelper::deinit();
    }

    /*
     * description: 
     * This event indicates that the ConnectionContext has added.
     */
    void fireContextAddedEvent(const std::string& ContextID, const ::v0::DCU::Telephony::CommonTypes::ConnectionContextItem& item);

    /*
     * description: 
     * This event indicates that the ConnectionContext has removed
     */
    void fireContextRemovedEvent(const std::string& ContextID);

    void deactivateManagedInstances() {
    }

    static CommonAPI::SomeIP::GetAttributeStubDispatcher<
        ::v0::DCU::Telephony::ConnectionManagerStub,
        CommonAPI::Version
    > getConnectionManagerInterfaceVersionStubDispatcher;


    /*
     * description: 
     * Deactivates all active contexts
     */
    
    static CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
        ::v0::DCU::Telephony::ConnectionManagerStub,
        std::tuple< >,
        std::tuple< ::v0::DCU::Telephony::CommonTypes::ContextError>,
        std::tuple< >,
        std::tuple< ::v0::DCU::Telephony::CommonTypes_::ContextErrorDeployment_t>
    > deactivateAllStubDispatcher;
    /*
     * description: 
     * Creates a new Primary context. The type contains the intended purpose of the context.
     */
    
    static CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
        ::v0::DCU::Telephony::ConnectionManagerStub,
        std::tuple< std::string, std::string>,
        std::tuple< ::v0::DCU::Telephony::CommonTypes::AddContextError, std::string>,
        std::tuple< CommonAPI::SomeIP::StringDeployment, CommonAPI::SomeIP::StringDeployment>,
        std::tuple< ::v0::DCU::Telephony::CommonTypes_::AddContextErrorDeployment_t, CommonAPI::SomeIP::StringDeployment>
    > addContextStubDispatcher;
    /*
     * description: 
     * Removes a primary context. All secondary contexts,
     * if any, associated with the primary context are also removed.
     */
    
    static CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
        ::v0::DCU::Telephony::ConnectionManagerStub,
        std::tuple< std::string>,
        std::tuple< ::v0::DCU::Telephony::CommonTypes::RemoveContextError>,
        std::tuple< CommonAPI::SomeIP::StringDeployment>,
        std::tuple< ::v0::DCU::Telephony::CommonTypes_::RemoveContextErrorDeployment_t>
    > removeContextStubDispatcher;
    /*
     * description: 
     * Gets the registered connection contexts on the modem.
     */
    
    static CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
        ::v0::DCU::Telephony::ConnectionManagerStub,
        std::tuple< >,
        std::tuple< std::vector< ::v0::DCU::Telephony::CommonTypes::ConnectionContextItem >>,
        std::tuple< >,
        std::tuple< CommonAPI::SomeIP::ArrayDeployment< ::v0::DCU::Telephony::CommonTypes_::ConnectionContextItemDeployment_t >>
    > getContextsStubDispatcher;
    /*
     * description: 
     * Gets the registered connection context wite ContextID on the modem.
     */
    
    static CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
        ::v0::DCU::Telephony::ConnectionManagerStub,
        std::tuple< std::string>,
        std::tuple< ::v0::DCU::Telephony::CommonTypes::GetContextError, ::v0::DCU::Telephony::CommonTypes::ConnectionContextItem>,
        std::tuple< CommonAPI::SomeIP::StringDeployment>,
        std::tuple< ::v0::DCU::Telephony::CommonTypes_::GetContextErrorDeployment_t, ::v0::DCU::Telephony::CommonTypes_::ConnectionContextItemDeployment_t>
    > getContextStubDispatcher;

    ConnectionManagerSomeIPStubAdapterInternal(
        const CommonAPI::SomeIP::Address &_address,
        const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection,
        const std::shared_ptr<CommonAPI::StubBase> &_stub):
        CommonAPI::SomeIP::StubAdapter(_address, _connection),
        ConnectionManagerSomeIPStubAdapterHelper(
            _address,
            _connection,
            std::dynamic_pointer_cast< ConnectionManagerStub>(_stub))
    {

        
                /*
                 * description: 
                 * Deactivates all active contexts
                 */
                ConnectionManagerSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x1001) }, &deactivateAllStubDispatcher );
                /*
                 * description: 
                 * Creates a new Primary context. The type contains the intended purpose of the context.
                 */
                ConnectionManagerSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x1002) }, &addContextStubDispatcher );
                /*
                 * description: 
                 * Removes a primary context. All secondary contexts,
                 * if any, associated with the primary context are also removed.
                 */
                ConnectionManagerSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x1003) }, &removeContextStubDispatcher );
                /*
                 * description: 
                 * Gets the registered connection contexts on the modem.
                 */
                ConnectionManagerSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x1004) }, &getContextsStubDispatcher );
                /*
                 * description: 
                 * Gets the registered connection context wite ContextID on the modem.
                 */
                ConnectionManagerSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x1005) }, &getContextStubDispatcher );


        // Provided events/fields
        {
            std::set<CommonAPI::SomeIP::eventgroup_id_t> itsEventGroups;
            itsEventGroups.insert(CommonAPI::SomeIP::eventgroup_id_t(0x1001));
            CommonAPI::SomeIP::StubAdapter::registerEvent(CommonAPI::SomeIP::event_id_t(0x9001), itsEventGroups, false);
        }
        {
            std::set<CommonAPI::SomeIP::eventgroup_id_t> itsEventGroups;
            itsEventGroups.insert(CommonAPI::SomeIP::eventgroup_id_t(0x1001));
            CommonAPI::SomeIP::StubAdapter::registerEvent(CommonAPI::SomeIP::event_id_t(0x9002), itsEventGroups, false);
        }
    }

private:
};

template <typename _Stub, typename... _Stubs>
CommonAPI::SomeIP::GetAttributeStubDispatcher<
    ::v0::DCU::Telephony::ConnectionManagerStub,
    CommonAPI::Version
    > ConnectionManagerSomeIPStubAdapterInternal<_Stub, _Stubs...>::getConnectionManagerInterfaceVersionStubDispatcher(&ConnectionManagerStub::lockInterfaceVersionAttribute, &ConnectionManagerStub::getInterfaceVersion, false);

/*
 * description: 
 * Deactivates all active contexts
 */
template <typename _Stub, typename... _Stubs>
CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
    ::v0::DCU::Telephony::ConnectionManagerStub,
    std::tuple< >,
    std::tuple< ::v0::DCU::Telephony::CommonTypes::ContextError>,
    std::tuple< >,
    std::tuple< ::v0::DCU::Telephony::CommonTypes_::ContextErrorDeployment_t>
> ConnectionManagerSomeIPStubAdapterInternal<_Stub, _Stubs...>::deactivateAllStubDispatcher(
    &ConnectionManagerStub::DeactivateAll,
    false,
    std::make_tuple(),
    std::make_tuple(static_cast< ::v0::DCU::Telephony::CommonTypes_::ContextErrorDeployment_t * >(nullptr)));

/*
 * description: 
 * Creates a new Primary context. The type contains the intended purpose of the context.
 */
template <typename _Stub, typename... _Stubs>
CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
    ::v0::DCU::Telephony::ConnectionManagerStub,
    std::tuple< std::string, std::string>,
    std::tuple< ::v0::DCU::Telephony::CommonTypes::AddContextError, std::string>,
    std::tuple< CommonAPI::SomeIP::StringDeployment, CommonAPI::SomeIP::StringDeployment>,
    std::tuple< ::v0::DCU::Telephony::CommonTypes_::AddContextErrorDeployment_t, CommonAPI::SomeIP::StringDeployment>
> ConnectionManagerSomeIPStubAdapterInternal<_Stub, _Stubs...>::addContextStubDispatcher(
    &ConnectionManagerStub::AddContext,
    false,
    std::make_tuple(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr), static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr)),
    std::make_tuple(static_cast< ::v0::DCU::Telephony::CommonTypes_::AddContextErrorDeployment_t * >(nullptr), static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr)));

/*
 * description: 
 * Removes a primary context. All secondary contexts,
 * if any, associated with the primary context are also removed.
 */
template <typename _Stub, typename... _Stubs>
CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
    ::v0::DCU::Telephony::ConnectionManagerStub,
    std::tuple< std::string>,
    std::tuple< ::v0::DCU::Telephony::CommonTypes::RemoveContextError>,
    std::tuple< CommonAPI::SomeIP::StringDeployment>,
    std::tuple< ::v0::DCU::Telephony::CommonTypes_::RemoveContextErrorDeployment_t>
> ConnectionManagerSomeIPStubAdapterInternal<_Stub, _Stubs...>::removeContextStubDispatcher(
    &ConnectionManagerStub::RemoveContext,
    false,
    std::make_tuple(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr)),
    std::make_tuple(static_cast< ::v0::DCU::Telephony::CommonTypes_::RemoveContextErrorDeployment_t * >(nullptr)));

/*
 * description: 
 * Gets the registered connection contexts on the modem.
 */
template <typename _Stub, typename... _Stubs>
CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
    ::v0::DCU::Telephony::ConnectionManagerStub,
    std::tuple< >,
    std::tuple< std::vector< ::v0::DCU::Telephony::CommonTypes::ConnectionContextItem >>,
    std::tuple< >,
    std::tuple< CommonAPI::SomeIP::ArrayDeployment< ::v0::DCU::Telephony::CommonTypes_::ConnectionContextItemDeployment_t >>
> ConnectionManagerSomeIPStubAdapterInternal<_Stub, _Stubs...>::getContextsStubDispatcher(
    &ConnectionManagerStub::GetContexts,
    false,
    std::make_tuple(),
    std::make_tuple(static_cast< CommonAPI::SomeIP::ArrayDeployment< ::v0::DCU::Telephony::CommonTypes_::ConnectionContextItemDeployment_t >* >(nullptr)));

/*
 * description: 
 * Gets the registered connection context wite ContextID on the modem.
 */
template <typename _Stub, typename... _Stubs>
CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
    ::v0::DCU::Telephony::ConnectionManagerStub,
    std::tuple< std::string>,
    std::tuple< ::v0::DCU::Telephony::CommonTypes::GetContextError, ::v0::DCU::Telephony::CommonTypes::ConnectionContextItem>,
    std::tuple< CommonAPI::SomeIP::StringDeployment>,
    std::tuple< ::v0::DCU::Telephony::CommonTypes_::GetContextErrorDeployment_t, ::v0::DCU::Telephony::CommonTypes_::ConnectionContextItemDeployment_t>
> ConnectionManagerSomeIPStubAdapterInternal<_Stub, _Stubs...>::getContextStubDispatcher(
    &ConnectionManagerStub::GetContext,
    false,
    std::make_tuple(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr)),
    std::make_tuple(static_cast< ::v0::DCU::Telephony::CommonTypes_::GetContextErrorDeployment_t * >(nullptr), static_cast< ::v0::DCU::Telephony::CommonTypes_::ConnectionContextItemDeployment_t* >(nullptr)));

/*
 * description: 
 * This event indicates that the ConnectionContext has added.
 */
template <typename _Stub, typename... _Stubs>
void ConnectionManagerSomeIPStubAdapterInternal<_Stub, _Stubs...>::fireContextAddedEvent(const std::string& _ContextID, const ::v0::DCU::Telephony::CommonTypes::ConnectionContextItem& _item) {
    CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment> deployed_ContextID(_ContextID, static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr));
    CommonAPI::Deployable< ::v0::DCU::Telephony::CommonTypes::ConnectionContextItem, ::v0::DCU::Telephony::CommonTypes_::ConnectionContextItemDeployment_t> deployed_item(_item, static_cast< ::v0::DCU::Telephony::CommonTypes_::ConnectionContextItemDeployment_t* >(nullptr));
    CommonAPI::SomeIP::StubEventHelper<CommonAPI::SomeIP::SerializableArguments<  CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment > 
    ,  CommonAPI::Deployable< ::v0::DCU::Telephony::CommonTypes::ConnectionContextItem, ::v0::DCU::Telephony::CommonTypes_::ConnectionContextItemDeployment_t > 
    >>
        ::sendEvent(
            *this,
            CommonAPI::SomeIP::event_id_t(0x9001),
            false,
             deployed_ContextID 
            ,  deployed_item 
    );
}

/*
 * description: 
 * This event indicates that the ConnectionContext has removed
 */
template <typename _Stub, typename... _Stubs>
void ConnectionManagerSomeIPStubAdapterInternal<_Stub, _Stubs...>::fireContextRemovedEvent(const std::string& _ContextID) {
    CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment> deployed_ContextID(_ContextID, static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr));
    CommonAPI::SomeIP::StubEventHelper<CommonAPI::SomeIP::SerializableArguments<  CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment > 
    >>
        ::sendEvent(
            *this,
            CommonAPI::SomeIP::event_id_t(0x9002),
            false,
             deployed_ContextID 
    );
}

template <typename _Stub = ::v0::DCU::Telephony::ConnectionManagerStub, typename... _Stubs>
class ConnectionManagerSomeIPStubAdapter
    : public ConnectionManagerSomeIPStubAdapterInternal<_Stub, _Stubs...>,
      public std::enable_shared_from_this< ConnectionManagerSomeIPStubAdapter<_Stub, _Stubs...>> {
public:
    ConnectionManagerSomeIPStubAdapter(const CommonAPI::SomeIP::Address &_address,
                                            const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection,
                                            const std::shared_ptr<CommonAPI::StubBase> &_stub)
        : CommonAPI::SomeIP::StubAdapter(_address, _connection),
          ConnectionManagerSomeIPStubAdapterInternal<_Stub, _Stubs...>(_address, _connection, _stub) {
    }
};

} // namespace Telephony
} // namespace DCU
} // namespace v0

#endif // V0_DCU_TELEPHONY_Connection_Manager_SOMEIP_STUB_ADAPTER_HPP_
