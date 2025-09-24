#include <bits/stdc++.h>

using namespace std;

class Items
{

    private :

        string id;
        string nama_items;
        int harga;

    public :

    Items(){}

    Items(string id, string nama, int harga)
    {
        this->id = id;
        this->nama_items = nama;
        this->harga = harga;
    }

    // Setter
    void setId(string id) 
    {
        this->id = id;
    }

    void setNamaItems(string nama_items) 
    {
        this->nama_items = nama_items;
    }

    void setHarga(int harga) 
    {
        this->harga = harga;
    }

    // Getter
    string getId() 
    {
        return this->id;
    }

    string getNamaItems() 
    {
        return this->nama_items;
    }

    int getHarga() 
    {
        return this->harga;
    }

    int id_length()
    {
        return id.length();
    }

    int name_length()
    {
        return nama_items.length();
    }

    int harga_length()
    {
        return to_string(harga).length();
    }

    ~Items(){}
    
};