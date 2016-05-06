//
//  freelectwitcurl.cpp
//  Twitter
//
//  Created by 김현재 on 2016. 5. 3..
//  Copyright © 2016년 김현재. All rights reserved.
//

#include "freelectwitcurl.h"


void FreeLectTwitCurl::setConsumerKey(std::string key) {
    this->consumerKey = key;
}


void FreeLectTwitCurl::setConsumerSecret(std::string key) {
    this->consumerSecretKey = key;
}

void FreeLectTwitCurl::setTwitterUsername(std::string userName) {
    this->userName = userName;
}

void FreeLectTwitCurl::setTwitterPassword(std::string passWord) {
    this->password = passWord;
}


bool FreeLectTwitCurl::friendsIdsGet(std::string parser, std::string userName) {
    return true;
}

std::string FreeLectTwitCurl::friendsIdsParse(std::string userName) {

    std::string ids = "kimhun456,id1,id2";

    return ids;
}

bool FreeLectTwitCurl::userLookup(std::string result, bool flag) {
    return true;
}

std::string FreeLectTwitCurl::userLookupParse(std::string parser) {

    if (parser == "name") {
        return "김현재,김천재,김민정,신수연,유곱등";
    }
    return "";

}