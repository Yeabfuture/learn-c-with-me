/*
A = Coins
B = Has 10 Yuan Bills

thicknessOf1Dime = 1.5mm
thicknessOf1FiftyCent = 1.5mm
thicknessOf1Yuan = 2.0mm

BToExchange = x10yuan;
N1dimeToExchange(x) + N1FiftyCentToExchange(y)+ N1YuanToExchange(z) == x10yuan

thicknessOfDime(x) == thicknessOfFifty(y) == thicknessOfYuan(z)


*/

#include <stdio.h>

#define MAX_COINS 500

int main() {
    int numBills = 0;

    if ((scanf("%d", &numBills) == 1 && numBills > 0)) {
        float totalValue = numBills * 10;

        float dimeHeight = 1.8;
        float fiftyCentHeight = 1.5;
        float yuanHeight = 2.0;

        for (int dimes = 0; dimes < MAX_COINS; dimes++) {
            float heightDimes = dimes * dimeHeight;
            float valueDimes = dimes * 0.1;

            for (int fifties = 0; fifties < MAX_COINS; fifties++) {
                float heightFifties = fifties * fiftyCentHeight;
                float valueFifties = valueDimes + (fifties * 0.5);

                if (heightDimes != heightFifties) {
                    continue;  // Skip this iteration early if heights don't match
                }

                for (int yuans = 0; yuans < MAX_COINS; yuans++) {
                    float valueTotal = valueFifties + (yuans * 1.0);
                    float heightYuans = yuans * yuanHeight;

                    if (valueTotal == totalValue && heightFifties == heightYuans && (dimes > 0 || fifties > 0 || yuans > 0)) {
                        printf("%d,%d,%d\n", dimes, fifties, yuans);
                        return 0;
                    }
                }
            }
        }

        printf("No change.\n");
        return 0;
    }
}
