#include <IOKit/IOService.h>

#define super IOService

class Hello : public IOService {
    OSDeclareDefaultStructors(Hello)
public:
    virtual bool init(OSDictionary *dictionary = 0) override;
    virtual void free() override;
    virtual IOService *probe(IOService *provider, SInt32 *score) override;
    virtual bool start(IOService *provider) override;
    virtual void stop(IOService *provider) override;
};
