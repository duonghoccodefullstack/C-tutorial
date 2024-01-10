#include <iostream>
#include <vector>

using namespace std;

class NhanVat
{
public:
    string ten;
    int mau;
    int satThuong;
    string monPhai;
    string kiNangNhanVat;
    NhanVat(const string &t, int m, int st, const string &mp, const string &k) : ten(t), mau(m), satThuong(st), monPhai(mp), kiNangNhanVat(k) {}

    void hienThiThongTin() const
    {
        cout << "Tên: " << ten << " \t\t\tKĩ năng: "
             << kiNangNhanVat
             << " \n Máu: " << mau << " \n Sát thương: " << satThuong << " \n Môn phái: " << monPhai << endl;
    }
};

class TroChoi
{
private:
    vector<NhanVat> nhanVats;

public:
    void themNhanVat()
    {
        string tenNhanVat, monPhai;
        string kiNangNhanVat;
        int mauNhanVat, satThuongNhanVat, chon;

        cout << "Nhập tên nhân vật: ";
        cin >> tenNhanVat;

        cout << "Nhập máu nhân vật: ";
        cin >> mauNhanVat;

        // update các môn phái  :
        cout << "Các môn phái  " << endl
             << "1.Thiếu Lâm\t\t\t 3.Võ Dang " << endl
             << "2.Nga Mi\t\t\t 4.Thiên Nhẫn " << endl;

        cout << "Nhập môn phái : ";
        cin >> chon;

        if (chon <= 0 && chon > 4)
        {
            cout << "Môn phái không hợp lệ. Vui lòng nhập lại!" << endl;
            return;
        }

        switch (chon)
        {
        case 1:
            monPhai = "Thiếu Lâm";
            kiNangNhanVat = "+ Sát thương diện rộng X2 sát thương \t\t +Đánh thắng hồi 50 máu";
            break;
        case 2:
            monPhai = "Nga Mi";
            kiNangNhanVat = "+ Hồi sinh sau khi chết cộng 50 máu  ";
            break;
        case 3:
            monPhai = "Võ Dang";
            kiNangNhanVat = "+ Tăng giáp ảo khi đánh trúng trừ 50 máu phần trăm giáp ";
            break;
        case 4:
            monPhai = "Thiên Nhẫn";
            kiNangNhanVat = "+ Hồi sinh thêm 1 mạng \t\t Giảm sát  thương một nửa ";
            break;
        }

        // update  hàm sửa lại sát thương ngẫu nghiên
        int sum, sum1;

        sum = rand() % 100 + 1; // random  1 đến  100

        satThuongNhanVat = sum;

        NhanVat nhanVatMoi(tenNhanVat, mauNhanVat, satThuongNhanVat, monPhai, kiNangNhanVat);
        nhanVats.push_back(nhanVatMoi);
        cout << "Đã thêm nhân vật thành công!\n"
             << endl;
    }

    void xoaNhanVat(const string &ten)
    {
        for (size_t i = 0; i < nhanVats.size(); ++i)
        {
            if (nhanVats[i].ten == ten)
            {
                nhanVats.erase(nhanVats.begin() + i);
                cout << "Đã xoá nhân vật nhân vật thua  thành công!" << endl;
                return;
            }
        }
        cout << "Không tìm thấy nhân vật có tên '" << ten << "'." << endl;
    }

    void hienThiDanhSachNhanVat() const
    {
        cout << "\n Danh sách nhân vật:" << endl;

        // update  danh sách nhân vật theo số
        int sum = 1;

        for (size_t i = 0; i < nhanVats.size(); ++i)
        {
            cout << "Nhân vật " << sum++ << ": " << endl;
            nhanVats[i].hienThiThongTin();
        }
    }

    void chienDau()
    {

    // hàm sát thương

    // fix sửa lại tên chiến đấu
    try_again:
        int index1 = rand() % nhanVats.size();
        int index2 = rand() % nhanVats.size();

        NhanVat &nhanVat1 = nhanVats[index1];
        NhanVat &nhanVat2 = nhanVats[index2];
        if (nhanVat1.ten == nhanVat2.ten)
        {
            goto try_again;
        }
        else
        {
            cout << "Trận đấu bắt đầu: " << nhanVat1.ten << " vs " << nhanVat2.ten << endl;
        }

        // update hàm sát thương
        while (nhanVat1.mau > 0 && nhanVat2.mau > 0)
        {
            if (nhanVat1.monPhai == "Thiếu Lâm" || nhanVat2.monPhai == "Thiếu Lâm")
            {
                for (int i = 0; i < nhanVats.size(); i++)
                {
                    if (nhanVats[i].ten != nhanVat1.ten && nhanVats[i].mau > 0)
                    {
                        nhanVats[i].mau = nhanVat1.satThuong * 2;
                        if (nhanVat1.mau = 0)
                        {
                            nhanVat2.mau += 50;
                        }
                        else
                        {
                            nhanVat1.mau += 50;
                        }
                    }
                }

                if (nhanVat1.monPhai == "Nga Mi" || nhanVat2.monPhai == "Nga Mi")
                {
                    for (int i = 0; i < nhanVats.size(); i++)
                    {
                        if (nhanVats[i].ten != nhanVat1.ten && nhanVats[i].mau > 0)
                        {
                            if (nhanVat1.mau == 0)
                            {
                                nhanVat1.mau += 150;
                            }
                            else
                            {
                                nhanVat2.mau += 150;
                            }
                        }
                    }
                }

                if (nhanVat1.monPhai == "Võ Đang" || nhanVat2.monPhai == "Võ Đang")
                {
                    int giap_ao;
                    giap_ao = 100;

                    for (int i = 0; i < nhanVats.size(); i++)
                    {
                        if (nhanVats[i].ten != nhanVat1.ten && nhanVats[i].mau > 0)
                        {
                            if (nhanVat1.mau == 0)
                            {
                                nhanVat1.mau += giap_ao;
                                nhanVat1.satThuong /= 2;
                            }
                            else
                            {
                                nhanVat2.mau += giap_ao;
                                nhanVat2.satThuong /= 2;
                            }
                        }
                    }
                    if (nhanVat1.monPhai == "Thiên Nhẫn" || nhanVat2.monPhai == "Thiên Nhẫn")
                    {
                        for (int i = 0; i < nhanVats.size(); i++)
                        {
                            if (nhanVats[i].ten != nhanVat1.ten && nhanVats[i].mau > 0)
                            {
                                if (nhanVat1.satThuong > 50)
                                {
                                    nhanVat1.mau = rand();
                                }
                                else
                                {
                                    nhanVat2.mau = rand();
                                }
                            }
                        }
                    }
                }
            }
            else
            {

                nhanVat1.mau -= nhanVat2.satThuong;
                nhanVat2.mau -= nhanVat1.satThuong;
            }

            nhanVat1.mau -= nhanVat2.satThuong;
            nhanVat2.mau -= nhanVat1.satThuong;
        }

        if (nhanVat1.mau <= 0)
        {
            if (nhanVat1.mau)
                cout << nhanVat2.ten << " chiến thắng!" << endl;
            xoaNhanVat(nhanVat1.ten);
        }
        else
        {
            cout << nhanVat1.ten << " chiến thắng!" << endl;
            xoaNhanVat(nhanVat2.ten);
        }
    }
};
int main()
{
    TroChoi troChoi;
    int luaChon;

    do
    {
        cout << "----- Menu -----" << endl;
        cout << "1. Thêm nhân vật" << endl;
        cout << "2. Hiển thị danh sách nhân vật" << endl;
        cout << "3. Chiến đấu" << endl;
        cout << "4. Thoát" << endl;

        cout << "Nhập lựa chọn: ";
        cin >> luaChon;

        switch (luaChon)
        {
        case 1:
            troChoi.themNhanVat();
            break;
        case 2:
            troChoi.hienThiDanhSachNhanVat();
            break;
        case 3:
            troChoi.chienDau();
            break;
        case 4:
            cout << " Ban đã thoát chương trinh" << endl;
            return 0;
        default:
            cout << " Bạn nhập sai . Xin  vui lòng nhập lại  " << endl;
            continue;
        }

    } while (luaChon != 0);
    return 0;
}