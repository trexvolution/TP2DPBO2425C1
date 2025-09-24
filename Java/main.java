import java.util.ArrayList;
import java.util.Scanner;

public class main 
{
    public static void main(String[] args) 
    {

        ArrayList<Brand> daftarItems = new ArrayList<>();

        // Tambahkan data awal
        daftarItems.add(new Brand("A001", "Samsung Galaxy S26", 20000000, "Android", "Hardware", "Alumunium", "Samsung", "China", 2026));
        daftarItems.add(new Brand("A002", "Iphone 17 Pro Max", 25000000, "IOS", "Hardware", "Baja", "Apple", "Amerika", 2026));
        daftarItems.add(new Brand("A003", "ROG Zephyrus 16", 30000000, "Laptop Gaming", "Hardware", "Baja", "Asus", "Amerika", 2024));
        daftarItems.add(new Brand("A004", "Macbook M5", 30000000, "Laptop IOS", "Hardware", "Alumunium", "Apple", "Amerika", 2026));
        daftarItems.add(new Brand("A005", "Techno Pova 7 Pro", 10000000, "Android", "Hardware", "Baja", "Techno", "China", 2026));

        Scanner scanner = new Scanner(System.in);
        int pilihan = 0;

        while (pilihan != 2) 
        {

            // Panjang minimal
            int idLen = 2, nameLen = 4, hargaLen = 5, deviceLen = 6, jenisLen = 5,
                bahanLen = 5, brandLen = 5, negaraLen = 6, tahunLen = 5;

            // Cari panjang maksimum
            for (Brand b : daftarItems) 
            {
                idLen = Math.max(idLen, b.idLength());
                nameLen = Math.max(nameLen, b.nameLength());
                hargaLen = Math.max(hargaLen, b.hargaLength());
                deviceLen = Math.max(deviceLen, b.namaDeviceLength());
                jenisLen = Math.max(jenisLen, b.jenisLength());
                bahanLen = Math.max(bahanLen, b.bahanLength());
                brandLen = Math.max(brandLen, b.namaBrandLength());
                negaraLen = Math.max(negaraLen, b.negaraLength());
                tahunLen = Math.max(tahunLen, b.tahunLength());
            }

            // Header tabel
            printLine(idLen, nameLen, hargaLen, deviceLen, jenisLen, bahanLen, brandLen, negaraLen, tahunLen);

            System.out.printf("|%-" + idLen + "s", "ID");
            System.out.printf("|%-" + nameLen + "s", "Name");
            System.out.printf("|%-" + hargaLen + "s", "Harga");
            System.out.printf("|%-" + deviceLen + "s", "Device");
            System.out.printf("|%-" + jenisLen + "s", "Jenis");
            System.out.printf("|%-" + bahanLen + "s", "Bahan");
            System.out.printf("|%-" + brandLen + "s", "Brand");
            System.out.printf("|%-" + negaraLen + "s", "Negara");
            System.out.printf("|%-" + tahunLen + "s", "Tahun");
            System.out.println("|");

            printLine(idLen, nameLen, hargaLen, deviceLen, jenisLen, bahanLen, brandLen, negaraLen, tahunLen);

            // Isi tabel
            for (Brand b : daftarItems) 
            {
                System.out.printf("|%-" + idLen + "s", b.getId());
                System.out.printf("|%-" + nameLen + "s", b.getNamaItems());
                System.out.printf("|%-" + hargaLen + "s", b.getHarga());
                System.out.printf("|%-" + deviceLen + "s", b.getNamaDevice());
                System.out.printf("|%-" + jenisLen + "s", b.getJenisPerangkat());
                System.out.printf("|%-" + bahanLen + "s", b.getBahan());
                System.out.printf("|%-" + brandLen + "s", b.getNamaBrand());
                System.out.printf("|%-" + negaraLen + "s", b.getNegara());
                System.out.printf("|%-" + tahunLen + "s", b.getTahun());
                System.out.println("|");
            }

            // Footer tabel
            printLine(idLen, nameLen, hargaLen, deviceLen, jenisLen, bahanLen, brandLen, negaraLen, tahunLen);

            // Menu
            System.out.println("List Perintah :");
            System.out.println("1. Tambahkan Data");
            System.out.println("2. Exit");
            System.out.print("Perintah apa yang ingin anda lakukan : ");
            pilihan = scanner.nextInt();
            scanner.nextLine(); // konsumsi newline

            if (pilihan == 1) 
            {
                System.out.println("Masukkan data dengan format:");
                System.out.println("(ID) (Nama Barang) (Harga) (Device) (Jenis Perangkat) (Bahan) (Brand Barang) (Negara Produksi) (Tahun)");

                String id = scanner.next();
                String name = scanner.next();
                int harga = scanner.nextInt();
                String device = scanner.next();
                String jenis = scanner.next();
                String bahan = scanner.next();
                String brand = scanner.next();
                String negara = scanner.next();
                int tahun = scanner.nextInt();

                Brand temp = new Brand(id, name, harga, device, jenis, bahan, brand, negara, tahun);
                daftarItems.add(temp);
            }
        }

        scanner.close();
    }

    // Fungsi untuk cetak garis tabel
    private static void printLine(int... lens) 
    {
        for (int len : lens) 
        {
            System.out.print("+");
            for (int i = 0; i < len; i++) 
            {
                System.out.print("-");
            }
        }
        System.out.println("+");
    }
}
