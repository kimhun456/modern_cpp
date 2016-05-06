//
//  freelectwitcurl.hpp
//  Twitter
//
//  Created by 김현재 on 2016. 5. 3..
//  Copyright © 2016년 김현재. All rights reserved.
//

#ifndef freelectwitcurl_hpp
#define freelectwitcurl_hpp

#include <stdio.h>
#include <string>

class FreeLectTwitCurl {

    std::string consumerKey;
    std::string consumerSecretKey;
    std::string userName;
    std::string password;
public:
    void setTwitterUsername(std::string userName);

    void setTwitterPassword(std::string password);

    void setConsumerKey(std::string key);

    void setConsumerSecret(std::string key);

    bool performAuth() {
        return true;
    }

    bool friendsIdsGet(std::string parser, std::string userName);

    std::string friendsIdsParse(std::string parser);

    bool userLookup(std::string result, bool flag);

    std::string userLookupParse(std::string parser);
};

#endif /* freelectwitcurl_hpp */
