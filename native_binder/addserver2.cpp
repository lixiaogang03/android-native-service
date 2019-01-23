
// addserver2.cpp
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <grp.h>
#include <binder/IPCThreadState.h>
#include <binder/ProcessState.h>
#include <binder/IServiceManager.h>
#include <cutils/log.h>

#include "SQRService2.h"

using namespace android;

int main(int argc, char** argv) {

    printf("server::main\n");

    sp<ProcessState> proc(ProcessState::self());

    sp<IServiceManager> sm = defaultServiceManager();

    ALOGI("ServiceManager: %p", sm.get());

    SQRService2::instantiate();

    ProcessState::self()->startThreadPool();

    IPCThreadState::self()->joinThreadPool();

    return 0;

}
