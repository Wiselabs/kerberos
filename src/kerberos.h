
#ifndef KERBEROS_NATIVE_EXTENSION_H
#define KERBEROS_NATIVE_EXTENSION_H

#include <nan.h>

NAN_METHOD(AuthGSSClientInit);
NAN_METHOD(AuthGSSClientClean);
NAN_METHOD(AuthGSSClientStep);
NAN_METHOD(AuthGSSClientResponse);
NAN_METHOD(AuthGSSClientResponseConf);
NAN_METHOD(AuthGSSClientUserName);
NAN_METHOD(AuthGSSClientUnwrap);
NAN_METHOD(AuthGSSClientWrap);

NAN_METHOD(AuthGSSServerInit);
NAN_METHOD(AuthGSSServerClean);
NAN_METHOD(AuthGSSServerStep);
NAN_METHOD(AuthGSSServerResponse);
NAN_METHOD(AuthGSSServerUserName);
NAN_METHOD(AuthGSSServerTargetName);

#endif