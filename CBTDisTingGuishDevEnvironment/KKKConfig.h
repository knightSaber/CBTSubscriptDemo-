//
//  KKKConfig.h
//  HuangtaijiDingcan
//
//  Created by WangJian on 15/6/29.
//  Copyright (c) 2015年 KKStudio. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString *kCommonURL;

//#define kAppStoreURL @"https://itunes.apple.com/app/id1031842992?mt=8"

/**************************************/
/*根据bundelID(字典的key)去找对应的参数*/
/**************************************/


//发布到appstore的正式服务器版本
//com.microfastup.zhm
//com.microfastup.pengpeng
#define kBundleIDForAppStore @"com.microfastup.weixun.CBTDisTingGuishAppStoreEnvironment"

#define kBundleIDForDevelop @"com.microfastup.weixun.CBTDisTingGuishDevEnvironment"

#define kBundleID [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleIdentifier"]
#define kISTestBundle  [kBundleID isEqualToString:kBundleIDForDevelop]


//请求地址
#define kURLConfig @{\
kBundleIDForAppStore:@{\
@"CommonURL":@"http://admin.cooktime.cbt",\
@"ext":@""\
},\
kBundleIDForDevelop:@{\
@"CommonURL":@"http://pengpeng.release.cbt",\
@"ext":@""\
},\
}

//个推相关配置
#define kGetuiConfig @{\
kBundleIDForAppStore:@{\
@"AppID":@"Y4V5fTWS11111114gno60hc9",\
@"AppKey":@"bchRnYk722222Iod6FL",\
@"AppSecret":@"y9oigf3333333p8PmjCS4",\
@"MasterSecret":@"iARVNWV44444444O5Mvo55"\
},\
kBundleIDForDevelop:@{\
@"AppID":@"ebCsh9J11111111GhSZ9Hb5",\
@"AppKey":@"A0NvhcE22222222GIkTKK9",\
@"AppSecret":@"naz30ptQ3333333333hJc53",\
@"MasterSecret":@"1RcoT4444444444VMeGpBIP2"\
}\
}

//环信配置
#define kHuanxinConfig @{\
kBundleIDForAppStore:@{\
@"AppKey":@"cbt2016#cbt",\
@"APNSCertName":@"zhm_production"\
},\
kBundleIDForDevelop:@{\
@"AppKey":@"cbt2016#cbt",\
@"APNSCertName":@"zhmdev_production"\
}\
}


@interface KKKConfig : NSObject

@end
