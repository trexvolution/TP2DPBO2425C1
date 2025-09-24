public class Device extends Items 
{

    // atribut private
    private String namaDevice;
    private String jenisPerangkat;
    private String bahan;

    // constructor default
    public Device() {}

    // constructor dengan parameter
    public Device(String id, String nama, int harga, String device, String jenis, String bahan) 
    {
        super(id, nama, harga); // memanggil constructor dari superclass (Items)
        this.namaDevice = device;
        this.jenisPerangkat = jenis;
        this.bahan = bahan;
    }

    // Setter
    public void setNamaDevice(String namaDevice) 
    {
        this.namaDevice = namaDevice;
    }

    public void setJenisPerangkat(String jenisPerangkat) 
    {
        this.jenisPerangkat = jenisPerangkat;
    }

    public void setBahan(String bahan) 
    {
        this.bahan = bahan;
    }

    // Getter
    public String getNamaDevice() 
    {
        return this.namaDevice;
    }

    public String getJenisPerangkat() 
    {
        return this.jenisPerangkat;
    }

    public String getBahan() 
    {
        return this.bahan;
    }

    // Method tambahan
    public int namaDeviceLength() 
    {
        return namaDevice != null ? namaDevice.length() : 0;
    }

    public int jenisLength() 
    {
        return jenisPerangkat != null ? jenisPerangkat.length() : 0;
    }

    public int bahanLength() 
    {
        return bahan != null ? bahan.length() : 0;
    }
}
