// 使用陣列（Array）產生三個分數的長條圖

#include <iostream>
using namespace std;

const int COUNT = 3;

void chart(int count, int scores[]);

int main(void) {
    // 取得使用者的分數
    int scores[COUNT];
    for (int i = 0; i < COUNT; i++)
    {
        cout << "Score " << i + 1 << ": ";
        cin >> scores[i];
    }

    // 把分數轉成圖表
    chart(COUNT, scores);
}

// 產生圖表
void chart(int count, int scores[]) {
    // 每一分產生一個井號
    for (int i = 0; i < count; i++) {
        for (int j = 0; j < scores[i]; j++) {
            cout << "#";
        }
        cout << "\n";
    }
}