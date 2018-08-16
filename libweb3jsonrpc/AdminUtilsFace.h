/**
 * This file is generated by jsonrpcstub, DO NOT CHANGE IT MANUALLY!
 */

#ifndef JSONRPC_CPP_STUB_DEV_RPC_ADMINUTILSFACE_H_
#define JSONRPC_CPP_STUB_DEV_RPC_ADMINUTILSFACE_H_

#include <libweb3jsonrpc/common.h>

#include "ModularServer.h"

namespace dev {
    namespace rpc {
        class AdminUtilsFace : public ServerInterface<AdminUtilsFace>
        {
            public:
                AdminUtilsFace()
                {
                    this->bindAndAddMethod(jsonrpc::Procedure("admin_setVerbosity", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_BOOLEAN, "param1",jsonrpc::JSON_INTEGER,"param2",jsonrpc::JSON_STRING, NULL), &dev::rpc::AdminUtilsFace::admin_setVerbosityI);
                    this->bindAndAddMethod(jsonrpc::Procedure("admin_verbosity", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_BOOLEAN, "param1",jsonrpc::JSON_INTEGER, NULL), &dev::rpc::AdminUtilsFace::admin_verbosityI);
                    this->bindAndAddMethod(jsonrpc::Procedure("admin_exit", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_BOOLEAN, "param1",jsonrpc::JSON_STRING, NULL), &dev::rpc::AdminUtilsFace::admin_exitI);
                }

                inline virtual void admin_setVerbosityI(const Json::Value &request, Json::Value &response)
                {
                    //param check
                    int param_v;
                    bool valid = dev::rpc::checkParamInt(param_v, request[0u], response);
                    if(valid)
                        response = this->admin_setVerbosity(param_v, request[1u].asString());
                }
                inline virtual void admin_verbosityI(const Json::Value &request, Json::Value &response)
                {
                    //param check
                    int param_v;
                    bool valid = dev::rpc::checkParamInt(param_v, request[0u], response);
                    if(valid)
                        response = this->admin_verbosity(param_v);
                }
                inline virtual void admin_exitI(const Json::Value &request, Json::Value &response)
                {
                    response = this->admin_exit(request[0u].asString());
                }
                virtual bool admin_setVerbosity(int param1, const std::string& param2) = 0;
                virtual bool admin_verbosity(int param1) = 0;
                virtual bool admin_exit(const std::string& param1) = 0;
        };

    }
}
#endif //JSONRPC_CPP_STUB_DEV_RPC_ADMINUTILSFACE_H_
