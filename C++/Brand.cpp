#include <bits/stdc++.h>

using namespace std;

class Brand : public Device
{

    private:
    
        string nama_brand;
        string negara;
        int tahun;

    public:

    Brand(){}

    Brand(string id, string nama, int harga, string device, string jenis, string bahan, string brand, string negara, int tahun)
        : Device(id, nama, harga, device, jenis, bahan)
    {
        this->nama_brand = brand;
        this->negara = negara;
        this->tahun = tahun;
    }

    // Setter
    void setNamaBrand(string nama_brand) 
    { 
        this->nama_brand = nama_brand; 
    }

    void setNegara(string negara) 
    { 
        this->negara = negara; 
    }

    void setTahun(int tahun) 
    { 
        this->tahun = tahun; 
    }

    // Getter
    string getNamaBrand() 
    { 
        return this->nama_brand; 
    }

    string getNegara() 
    { 
        return this->negara; 
    }

    int getTahun() 
    { 
        return this->tahun; 
    }

    int namabrand_length()
    {
        return nama_brand.length();
    }

    int negara_length()
    {
        return negara.length();
    }

    int tahun_length()
    {
        return to_string(tahun).length();
    }

    ~Brand(){}
};


