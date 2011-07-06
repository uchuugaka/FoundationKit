// Part of FoundationKit http://foundationk.it
//
// Derived from Peter Jihoon Kim's MIT-licensed ConciseKit: https://github.com/petejkim/ConciseKit

#include "NSSet-Concise.h"
#include "NSArray-Concise.h"
#include "NSNumber-Concise.h"
#include "NSDictionary-Concise.h"
#include "NSValue-Concise.h"
#include "NSNull-Concise.h"
#include "NSString-Concise.h"

#ifdef TARGET_OS_MAC
#define $app [NSApplication sharedApplication]
#elif defined TARGET_OS_IPHONE
#define $app [UIApplication sharedApplication]
#endif
