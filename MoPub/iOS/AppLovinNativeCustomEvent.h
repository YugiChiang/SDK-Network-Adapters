//
//  AppLovinNativeCustomEvent.h
//
//
//  Created by Thomas So on 5/21/17.
//
//

#if __has_include(<MoPub/MoPub.h>)
    #import <MoPub/MoPub.h>
#elif __has_include(<MoPubSDKFramework/MoPub.h>)
    #import <MoPubSDKFramework/MoPub.h>
#else
    #import "MPNativeCustomEvent.h"
#endif

@interface AppLovinNativeCustomEvent : MPNativeCustomEvent

@end
