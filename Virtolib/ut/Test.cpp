#include "gtest/gtest.h"
#include "../inc/VirtoHandler.hpp"
#include<vector>

TEST(translateData, test1) {
    
     VirtoHandler test;
    test.addData({"v", "0.000000", "2.000000" ,"2.000000"});
    test.translateData(1, 1,1);
    EXPECT_EQ (test.getValue(0, 0),  "v");
    EXPECT_EQ (test.getValue(0, 1),  "1.000000");
    EXPECT_EQ (test.getValue(0, 2),  "3.000000");
    EXPECT_EQ (test.getValue(0, 3),  "3.000000");
    EXPECT_EQ (test.getValue(0, 4),  "");
   
}

TEST(scaleData, test1) {
    
     VirtoHandler test;
    test.addData({"v", "0.000000", "2.000000" ,"2.000000"});
    test.scaleData(0);
    EXPECT_EQ (test.getValue(0, 0),  "v");
    EXPECT_EQ (test.getValue(0, 1),  "0.000000");
    EXPECT_EQ (test.getValue(0, 2),  "0.000000");
    EXPECT_EQ (test.getValue(0, 3),  "0.000000");
    EXPECT_EQ (test.getValue(0, 4),  "");
   
}