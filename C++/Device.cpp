#include <bits/stdc++.h>

using namespace std;

class Device : public Items
{
    private :

        string nama_device;
        string jenis_perangkat;
        string bahan;

    public :

    Device(){}

    Device(string id, string nama, int harga, string device, string jenis, string bahan)
        : Items(id, nama, harga)
    {
        this->nama_device = device;
        this->jenis_perangkat = jenis;
        this->bahan = bahan;
    }

    // Setter
    void setNamaDevice(string nama_device) 
    {
        this->nama_device = nama_device;
    }

    void setJenisPerangkat(string jenis_perangkat) 
    {
        this->jenis_perangkat = jenis_perangkat;
    }

    void setBahan(string bahan) 
    {
        this->bahan = bahan;
    }

    // Getter
    string getNamaDevice() 
    {
        return this->nama_device;
    }

    string getJenisPerangkat() 
    {
        return this->jenis_perangkat;
    }

    string getBahan() 
    {
        return this->bahan;
    }

    int namedevice_length()
    {
        return nama_device.length();
    }

    int jenis_length()
    {
        return jenis_perangkat.length();
    }

    int bahan_length()
    {
        return bahan.length();
    }

    ~Device(){}

};