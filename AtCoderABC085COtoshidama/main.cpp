//
//  main.cpp
//  AtCoderABC085COtoshidama
//
//  Created by osu on 2019/01/03.
//  Copyright © 2019 osu. All rights reserved.
//

#include <iostream>

void searchCombination(int N, int Y, int &ten, int &five, int &one){
    for(int i=N; i>=0; i--) {
        for(int j=N-i; j>=0; j--) {
            int k = N-i-j;
            if(i*10000+j*5000+k*1000 == Y) {
                ten = i;
                five = j;
                one = k;
                return;
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    int N(0), Y(0);
    std::cin >> N >> Y;

    int ten(-1), five(-1), one(-1);
    searchCombination(N, Y, ten, five, one);

    std::cout << ten << " " << five << " " << one;

    return 0;
}
