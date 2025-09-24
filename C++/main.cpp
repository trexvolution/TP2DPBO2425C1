#include <bits/stdc++.h>
#include "Items.cpp"
#include "Device.cpp"
#include "Brand.cpp"

using namespace std;

main()
{

    list<Brand> daftar_items;
    Brand list_1("A001", "Samsung Galaxy S26", 20000000, "Android", "Hardware", "Alumunium", "Samsung", "China", 2026);
    daftar_items.push_back(list_1);
    Brand list_2("A002", "Iphone 17 Pro Max", 25000000, "IOS", "Hardware", "Baja", "Apple", "Amerika", 2026);
    daftar_items.push_back(list_2);
    Brand list_3("A003", "ROG Zephyrus 16", 30000000, "Laptop Gaming", "Hardware", "Baja", "Asus", "Amerika", 2024);
    daftar_items.push_back(list_3);
    Brand list_4("A004", "Macbook M5", 30000000, "Laptop IOS", "Hardware", "Alumunium", "Apple", "Amerika", 2026);
    daftar_items.push_back(list_4);
    Brand list_5("A005", "Techno Pova 7 Pro", 10000000, "Android", "Hardware", "Baja", "Techno", "China", 2026);
    daftar_items.push_back(list_5);

    int pilihan = 0;
    while (pilihan != 2)
    {

        // Menentukan panjang kolom tabel agar rapi
        int id_len = 2, name_len = 4, harga_len = 5, device_len = 6, jenis_len = 5, bahan_len = 5, brand_len = 5, negara_len = 6, tahun_len = 5;

        // Mencari panjang maksimum dari tiap atribut agar tabel tidak terpotong
        for (Brand electroshop : daftar_items)
        {

            if(electroshop.id_length() > id_len)
            {
                id_len = electroshop.id_length();
            }

            if(electroshop.name_length() > name_len)
            {
                name_len = electroshop.name_length();
            }

            if(electroshop.harga_length() > harga_len)
            {
                harga_len = electroshop.harga_length();
            }

            if(electroshop.namedevice_length() > device_len)
            {
                device_len = electroshop.namedevice_length();
            }

            if(electroshop.jenis_length() > jenis_len)
            {
                jenis_len = electroshop.jenis_length();
            }

            if(electroshop.bahan_length() > bahan_len)
            {
                bahan_len = electroshop.bahan_length();
            }

            if(electroshop.namabrand_length() > brand_len)
            {
                brand_len = electroshop.namabrand_length();
            }

            if(electroshop.negara_length() > negara_len)
            {
                negara_len = electroshop.negara_length();
            }

            if(electroshop.tahun_length() > tahun_len)
            {
                tahun_len = electroshop.tahun_length();
            }

        }

        // Cetak header tabel
        cout << "+" << string (id_len, '-') 
        << "+" << string (name_len, '-') 
        << "+" << string (harga_len, '-') 
        << "+" << string (device_len, '-') 
        << "+" << string (jenis_len, '-') 
        << "+" << string (bahan_len, '-')
        << "+" << string (brand_len, '-')
        << "+" << string (negara_len, '-')
        << "+" << string (tahun_len, '-')
        << "+" << endl;

        cout << "|" << "ID" << string (id_len - 2, ' ')
        << "|" << "Name" << string (name_len - 4, ' ')
        << "|" << "Harga" << string (harga_len - 5, ' ')
        << "|" << "Device" << string (device_len - 6, ' ')
        << "|" << "Jenis" << string (jenis_len - 5, ' ')
        << "|" << "Bahan" << string (bahan_len - 5, ' ')
        << "|" << "Brand" << string (brand_len - 5, ' ')
        << "|" << "Negara" << string (negara_len - 6, ' ')
        << "|" << "Tahun" << string (tahun_len - 5, ' ')
        << "|" << endl;

        cout << "+" << string (id_len, '-') 
        << "+" << string (name_len, '-') 
        << "+" << string (harga_len, '-') 
        << "+" << string (device_len, '-') 
        << "+" << string (jenis_len, '-') 
        << "+" << string (bahan_len, '-')
        << "+" << string (brand_len, '-')
        << "+" << string (negara_len, '-')
        << "+" << string (tahun_len, '-')
        << "+" << endl;

        // Cetak isi data barang satu per satu
        for (Brand electrochop : daftar_items)
        {
            cout << "|" << electrochop.getId() << string (id_len - electrochop.getId().length(), ' ')
            << "|" << electrochop.getNamaItems() << string (name_len - electrochop.getNamaItems().length(), ' ')
            << "|" << electrochop.getHarga() << string (harga_len - to_string(electrochop.getHarga()).length(), ' ')
            << "|" << electrochop.getNamaDevice() << string (device_len - electrochop.getNamaDevice().length(), ' ')
            << "|" << electrochop.getJenisPerangkat() << string (jenis_len - electrochop.getJenisPerangkat().length(), ' ')
            << "|" << electrochop.getBahan() << string (bahan_len - electrochop.getBahan().length(), ' ')
            << "|" << electrochop.getNamaBrand() << string (brand_len - electrochop.getNamaBrand().length(), ' ')
            << "|" << electrochop.getNegara() << string (negara_len - electrochop.getNegara().length(), ' ')
            << "|" << electrochop.getTahun() << string (tahun_len - to_string(electrochop.getTahun()).length(), ' ')
            << "|" << endl;
        }

        // Cetak footer tabel
        cout << "+" << string (id_len, '-') 
        << "+" << string (name_len, '-') 
        << "+" << string (harga_len, '-') 
        << "+" << string (device_len, '-') 
        << "+" << string (jenis_len, '-') 
        << "+" << string (bahan_len, '-')
        << "+" << string (brand_len, '-')
        << "+" << string (negara_len, '-')
        << "+" << string (tahun_len, '-')
        << "+" << endl;

        cout << "List Perintah :" << endl;
        cout << "1. Tambahkan Data" << endl;
        cout << "2. Exit" << endl;
        cout << "Perintah apa yang ingin anda lakukan : ";
        cin >> pilihan;  // Input pilihan dari user

        if(pilihan == 1)
        {
            string id, name, device, jenis, bahan, brand, negara;
            int tahun, harga;

            cout << "Masukkan data dengan format seperti berikut :" << endl 
            << "(ID) (Nama Barang) (Harga) (Device) (Jenis Perangkat) (Bahan) (Brand Barang) (Negara Produksi) (Tahun)" << endl;
            cin >> id >> name >> harga >> device >> jenis >> bahan >> brand >> negara >> tahun;
            Brand temp(id, name, harga, device, jenis, bahan, brand, negara, tahun);
            daftar_items.push_back(temp);
        }
    }
    
    return 0;    
}
