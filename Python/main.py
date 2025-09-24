from Brand import Brand  # pastikan Brand, Device, Items sudah ada

def cetak_tabel(daftar_items):
    # Menentukan panjang kolom awal
    id_len = 2
    name_len = 4
    harga_len = 5
    device_len = 6
    jenis_len = 5
    bahan_len = 5
    brand_len = 5
    negara_len = 6
    tahun_len = 5

    # Cari panjang maksimum
    for electroshop in daftar_items:
        id_len = max(id_len, electroshop.id_length())
        name_len = max(name_len, electroshop.name_length())
        harga_len = max(harga_len, electroshop.harga_length())
        device_len = max(device_len, electroshop.namedevice_length())
        jenis_len = max(jenis_len, electroshop.jenis_length())
        bahan_len = max(bahan_len, electroshop.bahan_length())
        brand_len = max(brand_len, electroshop.namabrand_length())
        negara_len = max(negara_len, electroshop.negara_length())
        tahun_len = max(tahun_len, electroshop.tahun_length())

    def garis():
        print("+" + "-" * id_len +
              "+" + "-" * name_len +
              "+" + "-" * harga_len +
              "+" + "-" * device_len +
              "+" + "-" * jenis_len +
              "+" + "-" * bahan_len +
              "+" + "-" * brand_len +
              "+" + "-" * negara_len +
              "+" + "-" * tahun_len + "+")

    # Header
    garis()
    print("|" + "ID".ljust(id_len) +
          "|" + "Name".ljust(name_len) +
          "|" + "Harga".ljust(harga_len) +
          "|" + "Device".ljust(device_len) +
          "|" + "Jenis".ljust(jenis_len) +
          "|" + "Bahan".ljust(bahan_len) +
          "|" + "Brand".ljust(brand_len) +
          "|" + "Negara".ljust(negara_len) +
          "|" + "Tahun".ljust(tahun_len) + "|")
    garis()

    # Isi
    for electroshop in daftar_items:
        print("|" + electroshop.get_id().ljust(id_len) +
              "|" + electroshop.get_nama_items().ljust(name_len) +
              "|" + str(electroshop.get_harga()).ljust(harga_len) +
              "|" + electroshop.get_nama_device().ljust(device_len) +
              "|" + electroshop.get_jenis_perangkat().ljust(jenis_len) +
              "|" + electroshop.get_bahan().ljust(bahan_len) +
              "|" + electroshop.get_nama_brand().ljust(brand_len) +
              "|" + electroshop.get_negara().ljust(negara_len) +
              "|" + str(electroshop.get_tahun()).ljust(tahun_len) + "|")

    # Footer
    garis()


def main():
    daftar_items = [
        Brand("A001", "Samsung Galaxy S26", 20000000, "Android", "Hardware", "Alumunium", "Samsung", "China", 2026),
        Brand("A002", "Iphone 17 Pro Max", 25000000, "IOS", "Hardware", "Baja", "Apple", "Amerika", 2026),
        Brand("A003", "ROG Zephyrus 16", 30000000, "Laptop Gaming", "Hardware", "Baja", "Asus", "Amerika", 2024),
        Brand("A004", "Macbook M5", 30000000, "Laptop IOS", "Hardware", "Alumunium", "Apple", "Amerika", 2026),
        Brand("A005", "Techno Pova 7 Pro", 10000000, "Android", "Hardware", "Baja", "Techno", "China", 2026),
    ]

    pilihan = 0
    while pilihan != 2:
        cetak_tabel(daftar_items)
        print("List Perintah :")
        print("1. Tambahkan Data")
        print("2. Exit")
        try:
            pilihan = int(input("Perintah apa yang ingin anda lakukan : "))
        except ValueError:
            print("Input harus berupa angka!")
            continue

        if pilihan == 1:
            print("Masukkan data dengan format berikut:")
            print("(ID) (Nama Barang) (Harga) (Device) (Jenis Perangkat) (Bahan) (Brand Barang) (Negara Produksi) (Tahun)")
            try:
                data = input(">> ").split()
                if len(data) != 9:
                    print("Input tidak sesuai format!")
                    continue
                id_, name, harga, device, jenis, bahan, brand, negara, tahun = data
                harga = int(harga)
                tahun = int(tahun)
                temp = Brand(id_, name, harga, device, jenis, bahan, brand, negara, tahun)
                daftar_items.append(temp)
            except Exception as e:
                print("Terjadi kesalahan input:", e)


if __name__ == "__main__":
    main()