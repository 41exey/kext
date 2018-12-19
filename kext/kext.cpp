#include <IOKit/IOLib.h>
#include "kext.hpp"

OSDefineMetaClassAndStructors(Hello, super)

bool Hello::init(OSDictionary *dictionary) {
    bool result;
    result = super::init(dictionary);
    IOLog("Hello::Initializing\n");
    
    return result;
}

void Hello::free(void) {
    IOLog("Hello::Freeing\n");
    super::free();
}

IOService *Hello::probe(IOService *provider, SInt32 *score) {
    IOService *result = super::probe(provider, score);
    IOLog("Hello::Probing\n");
    
    return result;
}

bool Hello::start(IOService *provider) {
    bool result = super::start(provider);
    IOLog("Hello::Starting\n");
    
    return result;
}

void Hello::stop(IOService *provider) {
    IOLog("Hello::Stoping\n");
    super::stop(provider);
}
