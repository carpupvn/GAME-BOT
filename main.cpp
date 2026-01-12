//Ban quyen bot thuoc ve "Nguyen Phuoc" - CarPup
#include <bits/stdc++.h>
#include "random.h"
#include "time.h"
#include "tiengviet.h"
using namespace myRandom;
using namespace std;

int main() {
    bool jumped = false;
    string username;
    print << " Vui lòng nhập username: ";
    getline(scan,username);
    string PhienBan = "2.3.120126", pass = "cudem1981", TacGia = "NguyenPhuoc";
    long long HuCL = 5000000, HuTX = 5000000, coin = 100000;
    print << "\n---GAME BOT---------------------------------------";
    print << "\n Phiên bản hiện tại: " << PhienBan;
    print << "\n Số game được hỗ trợ: 8";
    print << "\n Sử dụng 'help' để xem danh sách lệnh được hỗ trợ";
    print << "\n Số coin hiện tại: " << coin;
    print << "\n Liên hệ hỗ trợ: 0936974180";
    print << "\n Phát hiện bất kỳ lỗi nào xin liên hệ số điện thoại hỗ trợ.";
    print << "\n Cảm ơn " << username << " đã sử dụng bot!";
    print << "\n Tác giả: " << TacGia;
    print << "\n--------------------------------------------------";
ChuKy:
    string a = "";
    print << "\n\n Nhập lệnh: ";
    scan >> a;
    while (false) {
            Loi:
            if (jumped) {
            print << "\n---Phát hiện lỗi----------------------------------";
            print << "\n Lệnh bạn nhập không đúng cú pháp!";
            print << "\n Sử dụng 'help' để xem danh sách lệnh được hỗ trợ.";
            print << "\n Vui lòng nhập lại lệnh!";
            print << "\n--------------------------------------------------";
            jumped = false;
            goto ChuKy;
    }
    }
    if (a == "exit") {
        print << "\n";
        for (int i = 4; i!= 0; i--) {
            print << "\rChương trình sẽ tắt sau: " << i-1 << " " ;
            wait(1s);
        }
        print << "\rChương trình đã tắt!       " ;
        return 0;
    } else if (a == "game") {
        string b;
        scan >> b;
        if (b == "chanle") {
            string c, KetQuaChu;
            long long d, KetQuaSo, dice1, dice2, dice3;
            scan >> c >> d;
            if ((d >= coin) || (d < 1)) {
                jumped = true;
                scan.ignore(1000, '\n');
                goto Loi;
            }
            dice1 = Dice();
            dice2 = Dice();
            dice3 = Dice();
            KetQuaSo = dice1 + dice2 + dice3;
            if ((c == "chan") && (KetQuaSo%2 == 0)) {
                if ((dice1 == dice2) && (dice1 == dice3)) {
                    KetQuaChu = "\nNổ hũ! Bạn đã thắng lớn!";
                    coin += d*80/100 + HuCL*20/100;
                    HuCL -= HuCL*20/100;
                } else {
                    KetQuaChu = "\nBạn đã thắng!";
                    coin += d*80/100;
                }
            } else if ((c == "chan") && (KetQuaSo%2 == 1)) {
                if ((dice1 == dice2) && (dice1 == dice3)) {
                    KetQuaChu = "Trượt hũ! Bạn đã thua!";
                    coin -= d;
                    HuCL += d;
                } else {
                    KetQuaChu = "Bạn đã thua!";
                    coin -= d;
                    HuCL += d;
                }
            } else if ((c == "le") && (KetQuaSo%2 == 0)) {
                if ((dice1 == dice2) && (dice1 == dice3)) {
                    KetQuaChu = "Trượt hũ! Bạn đã thua!";
                    coin -= d;
                    HuCL += d;
                } else {
                    KetQuaChu = "Bạn đã thua!";
                    coin -= d;
                    HuCL += d;
                }
            } else if ((c == "le") && (KetQuaSo%2 == 1)) {
                if ((dice1 == dice2) && (dice1 == dice3)) {
                    KetQuaChu = "Nổ hũ! Bạn đã thắng lớn!";
                    coin += d*80/100 + HuCL*20/100;
                    HuCL -= HuCL*20/100;
                } else {
                    KetQuaChu = "Bạn đã thắng!";
                    coin += d*80/100;
                }
            } else {
                jumped = true;
                scan.ignore(1000, '\n');
                goto Loi;
            }
            print << "\n---Kết Quả Trò Chơi-------------------------------";
            print << "\n Xúc sắc 1: " << dice1;
            print << "\n Xúc sắc 2: " << dice2;
            print << "\n Xúc sắc 3: " << dice3;
            print << "\n Kết quả: " << KetQuaSo;
            if (KetQuaSo %2 == 0) print << " -> chan";
            else print << " -> le";
            print << "\n Kết quả của bạn: " << c;
            print << "\n -> " << KetQuaChu;
            print << "\n Số coin hiện tại: " << coin;
            print << "\n Số coin trong hũ chanle: " << HuCL;
            print << "\n--------------------------------------------------";
            goto ChuKy;
        } else if (b == "taixiu") {
            string c;
            long long d, KetQuaSo, dice1, dice2, dice3;
            string KetQuaChu;
            scan >> c >> d;
            if ((d >= coin) || (d < 1)) {
                jumped = true;
                scan.ignore(1000, '\n');
                goto Loi;
            }
            dice1 = Dice();
            dice2 = Dice();
            dice3 = Dice();
            KetQuaSo = dice1 + dice2 + dice3;
            if ((c == "tai") && (KetQuaSo >= 11)) {
                if ((dice1 == dice2) && (dice1 == dice3)) {
                    KetQuaChu = "Nổ hũ! Bạn đã thắng lớn!";
                    coin += d*80/100 + HuCL*20/100;
                    HuTX -= HuTX*20/100;
                } else {
                    KetQuaChu = "Bạn đã thắng!";
                    coin += d*80/100;
                }
            } else if ((c == "tai") && (KetQuaSo <= 10)) {
                if ((dice1 == dice2) && (dice1 == dice3)) {
                    KetQuaChu = "Trượt hũ! Bạn đã thua!";
                    coin -= d;
                    HuTX += d;
                } else {
                    KetQuaChu = "Bạn đã thua!";
                    coin -= d;
                    HuTX += d;
                }
            } else if ((c == "xiu") && (KetQuaSo >= 11)) {
                if ((dice1 == dice2) && (dice1 == dice3)) {
                    KetQuaChu = "Trượt hũ! Bạn đã thua!";
                    coin -= d;
                    HuTX += d;
                } else {
                    KetQuaChu = "Bạn đã thua!";
                    coin -= d;
                    HuTX += d;
                }
            } else if ((c == "xiu") && (KetQuaSo <= 10)) {
                if ((dice1 == dice2) && (dice1 == dice3)) {
                    KetQuaChu = "Nổ hũ! Bạn đã thắng lớn!";
                    coin += d*80/100 + HuCL*20/100;
                    HuTX -= HuTX*20/100;
                } else {
                    KetQuaChu = "Bạn đã thắng!";
                    coin += d*80/100;
                }
            } else {
                jumped = true;
                scan.ignore(1000, '\n');
                goto Loi;
            }
            print << "\n";
            for (int i = 61; i != 0 ; i--) {
                print << "\rThời gian còn lại: " << i - 1 << "   " ;
                wait(1s);
            }
            print << "\r---Kết Quả Trò Chơi-------------------------------" ;
            print << "\n Xúc sắc 1: " << dice1;
            print << "\n Xúc sắc 2: " << dice2;
            print << "\n Xúc sắc 3: " << dice3;
            print << "\n Kết quả: " << KetQuaSo;
            if (KetQuaSo >= 11) print << " -> tai";
            else print << " -> xiu";
            print << "\n Kết quả của bạn: " << c;
            print << "\n -> " << KetQuaChu;
            print << "\n Số coin hiện tại: " << coin;
            print << "\n Số coin trong hũ taixiu: " << HuTX;
            print << "\n--------------------------------------------------";
            goto ChuKy;
        } else if (b == "baucua") {
            int SoThang = 0;
            long long d;
            string c, KetQuaChu, DiceBC1, DiceBC2, DiceBC3;
            scan >> c >> d;
            if ((d >= coin) || (d < 1)) {
                jumped = true;
                scan.ignore(1000, '\n');
                goto Loi;
            }
            DiceBC1 = RanStrList("bau", "cua", "tom", "ca", "nai", "ga");
            DiceBC2 = RanStrList("bau", "cua", "tom", "ca", "nai", "ga");
            DiceBC3 = RanStrList("bau", "cua", "tom", "ca", "nai", "ga");
            if ((c != "bau") && (c != "cua") && (c != "tom") && (c != "ca") && (c != "nai") && (c != "ga")) {
                jumped = true;
                scan.ignore(1000, '\n');
            }
            if (c == DiceBC1) {
                SoThang += 1;
            }
            if (c == DiceBC2) {
                SoThang += 1;
            }
            if (c == DiceBC3) {
                SoThang += 1;
            }
            if (SoThang == 0) {
                KetQuaChu = "Bạn đã thua!";
                coin -= d;
            } else {
                KetQuaChu = "Bạn đã thắng!";
                coin += d*SoThang;
            }
            print << "\n";
            for (int i = 61; i != 0 ; i--) {
                print << "\rThời gian còn lại: " << i - 1 << "   " ;
                wait(1s);
            }
            print << "\r---Kết Quả Trò Chơi-------------------------------" ;
            print << "\n Kết quả 1: " << DiceBC1;
            print << "\n Kết quả 2: " << DiceBC2;
            print << "\n Kết quả 3: " << DiceBC3;
            print << "\n Kết quả của bạn: " << c;
            print << "\n -> " << KetQuaChu;
            print << "\n Số lần thắng: " << SoThang;
            print << "\n Số coin hiện tại: " << coin;
            print << "\n--------------------------------------------------";
            goto ChuKy;
        } else if (b == "keobuabao") {
            string c, KetQuaKBB, KetQuaChu;
            long long d;
            scan >> c >> d;
            if ((c != "keo") && (c != "bua") && (c != "bao")) {
                jumped = true;
                scan.ignore(1000, '\n');
                goto Loi;
            }
            if ((d >= coin) || (d < 1)) {
                jumped = true;
                scan.ignore(1000, '\n');
                goto Loi;
            }
            KetQuaKBB = RanStrList("keo", "bua", "bao");
            if ((c == "keo" && KetQuaKBB == "bao") || (c == "bua" && KetQuaKBB == "keo") || (c == "bao" && KetQuaKBB == "bua")) {
                KetQuaChu = "Bạn đã thắng!";
                coin += d;
            } else if (c == KetQuaKBB) {
                KetQuaChu = "Hòa";
            } else {
                KetQuaChu = "Bạn đã thua!";
                coin -= d;
            }
            print << "\n---Kết Quả Trò Chơi-------------------------------";
            print << "\n Kết quả keobuabao: " << KetQuaKBB;
            print << "\n Kết quả của bạn: " << c;
            print << "\n -> " << KetQuaChu;
            print << "\n Số coin hiện tại: " << coin;
            print << "\n--------------------------------------------------";
            goto ChuKy;
        } else if (b == "vongquay") {
            long long c;
            scan >> c;
            string KetQuaVQ;
            if ((c >= coin) || (c < 1)) {
                jumped = true;
                scan.ignore(1000, '\n');
                goto Loi;
            }
            KetQuaVQ = RanStrList("+100", "x2", "-50", "Jackpot", "Mất hết", "Hoàn tiền");
            coin -= c;
            if (KetQuaVQ == "+100") {
                coin += c + 100;
            } else if (KetQuaVQ == "x2") {
                coin += c * 3;
            } else if (KetQuaVQ == "-50") {
                coin += c - 50;
            } else if (KetQuaVQ == "Jackpot") {
                coin += c * 11;
            } else if (KetQuaVQ == "Mất hết") {
                coin = 0;
            } else {
                coin += c;
            }
            print << "\n---Kết Quả Trò Chơi-------------------------------";
            print << "\n Kết quả vòng quay: " << KetQuaVQ;
            print << "\n Số tiền đặt cược: " << c;
            print << "\n Số coin hiện tại: " << coin;
            print << "\n--------------------------------------------------";
            goto ChuKy;
        } else if (b == "vongquaymaimoi") {
            string KetQuaVQMM;
            KetQuaVQMM = RanStrList("A", "B", "C", "D", "Đ", "E", "Ê", "G", "H", "I", "K", "L", "M", "N", "O", "Ô", "Ơ", "P", "Q", "R", "S","T", "U", "Ư", "V", "X", "Y");
            int PTKetQuaVQMM;
            PTKetQuaVQMM = RanInt(0,100);
            print << "\n";
            for (int i = 4; i != 0; i--) {
                print << "\rThời gian còn lại: " << i - 1 << " " ;
                wait(1s);
            }
            print << "\r---Dự Đoán Tên Người Yêu Tương Lai----------------" ;
            print << "\n Người cần mai mới: " << username;
            print << "\n Kết quả vòng quay mai mới: " << KetQuaVQMM;
            print << "\n Độ phù hợp: " << PTKetQuaVQMM << "%";
            print << "\n Chúc bạn sớm có người yêu!";
            print << "\n--------------------------------------------------";
            goto ChuKy;
            } else if (b == "doanso") {
                long long c, d;
                scan >> c >> d;
                if ((c < 0) || (c > d)) {
                    jumped = true;
                    scan.ignore(1000, '\n');
                    goto Loi;
                }
                long long KetQuaDS;
                KetQuaDS = RanInt(c, d);
                int SoLan = 0;
                DoanSo:
                SoLan++;
                int e;
                print << "\n Nhập số dự đoán: ";
                scan >> e;
                if (e == -1) {
                    print << "\n Đã thoát trò chơi!";
                    goto ChuKy;
                }else if (e > KetQuaDS) {
                    print << "\n---Kết Quả Trò Chơi-------------------------------";
                    print << "\n Số bạn nhập lớn hơn kết quả hệ thống random";
                    print << "\n Vui lòng thử lại";
                    print << "\n--------------------------------------------------";
                    goto DoanSo;
                } else if (e < KetQuaDS) {
                    print << "\n---Kết Quả Trò Chơi-------------------------------";
                    print << "\n Số bạn nhập nhỏ hơn kết quả hệ thống random";
                    print << "\n Vui lòng thử lại";
                    print << "\n--------------------------------------------------";
                    goto DoanSo;
                } else if (e == KetQuaDS) {
                    print << "\n---Kết Quả Trò Chơi-------------------------------";
                    print << "\n Chúc mừng bạn đã đoán trúng số!";
                    print << "\n Kết quả: " << KetQuaDS;
                    print << "\n Bạn đã đoán trúng sau " << SoLan << " lần đoán";
                    print << "\n--------------------------------------------------";
                    goto ChuKy;
                } else {
                    jumped = true;
                    scan.ignore(1000, '\n');
                    goto Loi;
                }
            } else if (b == "boitinhyeu") {
                string c, d;
                print << "\n---Boi Tinh Yeu-----------------------------------";
                print << "\n Nhập tên người 1: ";
                scan.ignore();
                getline(scan,c);
                print << "\n Nhập tên người 2: ";
                getline(scan,d);
                int KetQuaBTY = RanInt(0,100);
                print << "\n";
                for (int i = 6; i != 0; i--) {
                    print << "\rThời gian còn lại: " << i-1 ;
                    wait(1s);
                }
                print << "\r---Kết Quả Bói Tình Yêu---------------------------" ;
                print << "\n Kết quả giữa " << c << " & " << d << " là: " << KetQuaBTY << "%";
                print << "\n--------------------------------------------------";
                goto ChuKy;
            } else if (b == "huongdan") {
            string c;
            scan >> c;
            if (c == "chanle") {
                print << "\n---Hướng dẫn game---------------------------------";
                print << "\n Cú pháp: game chanle [chan/le] <số coin>";
                print << "\n -> Cược chan/le kèm số coin";
                print << "\n Hệ thống random 3 xúc xắc và tính tổng";
                print << "\n Nếu tổng chẵn -> Kết quả chẵn";
                print << "\n Nếu tổng lẻ -> Kết quả lẻ";
                print << "\n Nếu kết quả cược trùng kết quả máy đưa ra -> Bạn thắng";
                print << "\n Nếu không -> Bạn thua";
                print << "\n Nếu xúc xắc ra 3 số giống nhau -> Jackpot";
                print << "\n òn thắc mắc vui lòng liên hệ: 0936974180(Zalo)";
                print << "\n--------------------------------------------------";
            } else if (c == "taixiu") {
                print << "\n---Hướng dẫn game---------------------------------";
                print << "\n Cú pháp: game taixiu [tai/xiu] <số coin>";
                print << "\n -> Cược tai/xiu kèm số coin";
                print << "\n Hệ thống random 3 xúc xắc và tính tổng";
                print << "\n Nếu tổng >10 -> Kết quả tài";
                print << "\n Nếu tổng <= 10 -> Kết quả xỉu";
                print << "\n Nếu kết quả cược trùng kết quả máy đưa ra -> Bạn thắng";
                print << "\n Nếu không -> Bạn thua";
                print << "\n Nếu xúc xắc ra 3 số giống nhau -> Jackpot";
                print << "\n òn thắc mắc vui lòng liên hệ: 0936974180(Zalo)";
                print << "\n--------------------------------------------------";
            } else if (c == "baucua") {
                print << "\n---Hướng dẫn game---------------------------------";
                print << "\n Cú pháp: game baucua [bau/cua/tom/ca/nai/ga] <số coin>";
                print << "\n -> Cược bau/cua/tom/ca/nai/ga kèm số coin";
                print << "\n Hệ thống random 3 lần ra các kết quả: bau/cua/ tom/ca/nai/ga";
                print << "\n Nếu kết quả cược trùng kết quả máy đưa ra -> Bạn thắng";
                print << "\n Nếu không -> Bạn thua";
                print << "\n Hiện hệ thống chỉ cho phép đặt cược 1 con 1 lần";
                print << "\n Còn thắc mắc vui lòng liên hệ: 0936974180(Zalo)";
                print << "\n--------------------------------------------------";
            } else if (c == "keobuabao") {
                print << "\n---Hướng dẫn game---------------------------------";
                print << "\n Cú pháp: game keobuabao [keo/bua/bao] <số coin>";
                print << "\n -> Cược keo/bua/bao kèm số coin";
                print << "\n Hệ thống random 1 trong các kết quả: keo/bua/bao";
                print << "\n Quy tắc trò chơi như trò keo bua bao";
                print << "\n Còn thắc mắc vui lòng liên hệ: 0936974180(Zalo)";
                print << "\n--------------------------------------------------";
            } else if (c == "vongquay") {
                print << "\n---Hướng dẫn game---------------------------------";
                print << "\n Cú pháp: game vongquay <số coin>";
                print << "\n -> Cược số coin";
                print << "\n Hệ thống random 1 trong các kết quả: +100/x2/-50/Jackpot/Mat het/Hoan tien";
                print << "\n Số coin bạn đặt cược được xử lý theo kết quả bạn quay ra";
                print << "\n Còn thắc mắc vui lòng liên hệ: 0936974180(Zalo)";
                print << "\n--------------------------------------------------";
            } else if (c == "vongquaymaimoi") {
                print << "\n---Hướng dẫn game---------------------------------";
                print << "\n Cú pháp: game vongquaymaimoi";
                print << "\n -> Dự đoán tên người yêu tương lai";
                print << "\n Hệ thống random chu cai viet hoa va muc do phu hop";
                print << "\n Chu cai hien ra la ten nguoi yeu tuong lai cua ban";
                print << "\n Còn thắc mắc vui lòng liên hệ: 0936974180(Zalo)";
                print << "\n--------------------------------------------------";
            } else if (c == "doanso") {
                print << "\n---Hướng dẫn game---------------------------------";
                print << "\n Cú pháp: game doanso <số nhỏ nhất> <số lớn nhất>";
                print << "\n -> Đoán số hệ thống random";
                print << "\n Hệ thống random kết quả trong khoảng bạn nhập";
                print << "\n Bạn sẽ đoán đến khi đúng số";
                print << "\n Nếu muốn ngưng chơi, nhập '-1'";
                print << "\n Còn thắc mắc vui lòng liên hệ: 0936974180(Zalo)";
                print << "\n--------------------------------------------------";
            } else if (c == "boitinhyeu") {
                print << "\n---Hướng dẫn game---------------------------------";
                print << "\n Cú pháp: game boitinhyeu";
                print << "\n -> Nhập lần lượt tên người thứ nhất và người thứ hai";
                print << "\n Hệ thống sẽ random mức độ phù hợp của 2 người";
                print << "\n òn thắc mắc vui lòng liên hệ: 0936974180(Zalo)";
                print << "\n--------------------------------------------------";
            } else {
                jumped = true;
                scan.ignore(1000,'\n');
                goto Loi;
            }
            goto ChuKy;
        } else {
            jumped = true;
            scan.ignore(1000, '\n');
            goto Loi;
        }
    } else if (a == "reset") {
        coin = 100;
        HuCL = 500;
        HuTX = 500;
        print << "\n---Đã Sửa Hệ Thống--------------------------------";
        print << "\n Số coin hiện tại: " << coin;
        print << "\n Số coin trong hũ chanle: " << HuCL;
        print << "\n Số coin trong hũ taixiu: " << HuTX;
        print << "\n--------------------------------------------------";
        goto ChuKy;
    } else if (a == "hack") {
        print << "\n Vui lòng nhập mật khẩu để sử dụng: ";
        string b;
        scan >> b;
        if (b == pass) {
            coin = 1000000;
            HuCL = 5000000;
            HuTX = 5000000;
            print << "\n---Đã Sửa Hệ Thống--------------------------------";
            print << "\n Số coin hiện tại: " << coin;
            print << "\n Số coin trong hũ chanle: " << HuCL;
            print << "\n Số coin trong hũ taixiu: " << HuTX;
            print << "\n *Vui lòng không làm sai lệnh admin!*";
            print << "\n--------------------------------------------------";
            goto ChuKy;
        } else {
            print << "\nMật khẩu sai!";
            goto ChuKy;
        }
    } else if (a == "mycard") {
        string userrate;
        if (coin >= 1000000) userrate = "Kim cương";
        else if (coin >= 100000) userrate = "Vàng";
        else if (coin >= 10000) userrate = "Bạc";
        else if (coin >= 1000) userrate = "Đồng";
        else if (coin >= 100) userrate = "Gỗ";
        else userrate = "Không xếp loại";
        print << "\n---Người chơi-------------------------------------";
        print << "\n Tên người chơi: " << username;
        print << "\n Số coin hiện tại: " << coin;
        print << "\n Đánh giá người chơi: " << userrate;
        print << "\n--------------------------------------------------";
        goto ChuKy;
    } else if (a == "botinfo") {
        print << "\n ---INFO------------------------------------------";
        print << "\n Bot thuộc sở hữu của cá nhân: " << TacGia;
        print << "\n Số điện thoại liên hệ (Zalo): 0936974180";
        print << "\n Dự án bot được bắt đầu từ ngày: 29/11/2025";
        print << "\n Phiên bản hiện tại: " << PhienBan;
        print << "\n--------------------------------------------------";
        goto ChuKy;
    } else if (a == "help") {
        print << "\n---Danh Sách Các Lệnh Được Hỗ Trợ-----------------";
        print << "\n help: Xem danh sách các lệnh được hỗ trợ";
        print << "\n reset: Reset coin và hũ";
        print << "\n gamehelp: Xem danh sách các game được hỗ trợ";
        print << "\n mycard: Xem số coin hiện tại";
        print << "\n botinfo: Xem thông tin bot";
        print << "\n banquyen: Xem bản quyền bot";
        print << "\n thayten <username>: Thay username";
        print << "\n *ác lệnh admin sẽ không được hiển thị ở đây*";
        print << "\n *Nhập lệnh vui lòng không viết hoa và bỏ dấu*";
        print << "\n--------------------------------------------------";
        goto ChuKy;
    } else if (a == "banquyen") {
        print << "\n---Ban Quyen Bot----------------------------------";
        print << "\n Copyright belongs to: NguyenPhuoc";
        print << "\n--------------------------------------------------";
        goto ChuKy;
    } else if (a == "gamehelp") {
        print << "\n---Danh Sách Các Trò Chơi Có Thể Chơi-------------";
        print << "\n chanle: Cuoc chan/le -> Cú pháp: game chanle [chan/le] <so coin>";
        print << "\n taixiu: Cuoc tai/xiu -> Cú pháp: game taixiu [tai/xiu] <so coin>";
        print << "\n baucua: Cuoc bau/cua/tom/ca/nai/ga -> Cú pháp: game bau cua [bau/cua/tom/ca/nai/ga] <so coin>";
        print << "\n keobuabao: Cuoc keo/bua/bao -> Cú pháp: game keobuabao [keo/bua/bao] <so coin>";
        print << "\n vongquay: Quay ngẫu nhiên giải thưởng -> Cú pháp: game vongquay <so coin>";
        print << "\n vongquaymaimoi: Tìm ngẫu nhiên tên người yêu tưởng lai -> Cú pháp: game vongquaymaimoi";
        print << "\n boitinhyeu: Tìm mức độ phù hợp của 2 người -> Cú pháp: game boitinhyeu";
        print << "\n huongdan: Hướng dẫn chi tiết từng game -> Cú pháp: game huongdan [chanle/baucua/taixiu/keobuabao/vongquay]";
        print << "\n *Vui lòng không đặt cược số tiền không có";
        print << "\n--------------------------------------------------";
        goto ChuKy;
    } else if (a == "buff") {
        print << "\n Vui lòng nhập mật khẩu để sử dụng: ";
        string b;
        scan >> b;
        if (b == pass) {
            print << "\n Vui lòng nhập số tiền muốn nâng: ";
            long long c;
            scan >> c;
            if (c < 0) {
                jumped = true;
                scan.ignore(1000, '\n');
            } else {
            coin += c;
            print << "\n---Dã Sửa Hệ Thống--------------------------------";
            print << "\n Số coin hiện tại: " << coin;
            print << "\n *Vui lòng không làm dụng lệnh admin!*";
            print << "\n--------------------------------------------------";
            goto ChuKy;
            }
        } else {
            print << "\nMật khẩu sai!";
            goto ChuKy;
        }
    } else if (a == "adminhelp") {
        print << "\n Vui lòng nhập mật khẩu để sử dụng: ";
        string b;
        scan >> b;
        if (b == pass) {
            print << "\n---Danh Sách Các Lệnh ADMIN Được Hỗ Trợ-----------";
            print << "\n adminhelp: Xem danh sách các lệnh được hỗ trợ cho admin";
            print << "\n buff: Nâng coin";
            print << "\n nerf: Giảm coin";
            print << "\n hack: Nâng coin và hu các game lên giá trị nhất định";
            print << "\n *Vui lòng không làm dụng lệnh admin!*";
            print << "\n--------------------------------------------------";
            goto ChuKy;
        } else {
            print << "\n Mật khẩu sai!";
            goto ChuKy;
        }
    } else if (a == "nerf") {
        print << "\n Vui lòng nhập mật khẩu để sử dụng: ";
        string b;
        scan >> b;
        if (b == pass) {
            print << "\n Vui lòng nhập số tiền muốn giảm: ";
            long long c;
            scan >> c;
            if (c > coin) {
                jumped = true;
                scan.ignore(1000, '\n');
            } else {
            coin -= c;
            print << "\n---Dã Sửa Hệ Thống--------------------------------";
            print << "\n Số coin hiện tại: " << coin;
            print << "\n *Vui lòng không làm dụng lệnh admin!*";
            print << "\n--------------------------------------------------";
            goto ChuKy;
            }
        } else {
            print << "\nMật khẩu sai!";
            goto ChuKy;
        }
    } else if (a == "thayten") {
        string b;
        getline(scan,b);
        username = b;
        print << "\n---Dã Sửa Hệ Thống--------------------------------";
        print << "\n Username mới của bạn: " << username;
        print << "\n--------------------------------------------------";
        goto ChuKy;
    } else {
        jumped = true;
        scan.ignore(1000, '\n');
    }
    goto Loi;
}
