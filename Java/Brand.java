public class Brand extends Device 
{

    // atribut private
    private String namaBrand;
    private String negara;
    private int tahun;

    // constructor default
    public Brand() {}

    // constructor dengan parameter
    public Brand(String id, String nama, int harga, String device, String jenis, String bahan,
                 String brand, String negara, int tahun) 
    {
        super(id, nama, harga, device, jenis, bahan); // panggil constructor Device
        this.namaBrand = brand;
        this.negara = negara;
        this.tahun = tahun;
    }

    // Setter
    public void setNamaBrand(String namaBrand) 
    {
        this.namaBrand = namaBrand;
    }

    public void setNegara(String negara) 
    {
        this.negara = negara;
    }

    public void setTahun(int tahun) 
    {
        this.tahun = tahun;
    }

    // Getter
    public String getNamaBrand() 
    {
        return this.namaBrand;
    }

    public String getNegara() 
    {
        return this.negara;
    }

    public int getTahun() 
    {
        return this.tahun;
    }

    // Method tambahan
    public int namaBrandLength() 
    {
        return namaBrand != null ? namaBrand.length() : 0;
    }

    public int negaraLength() 
    {
        return negara != null ? negara.length() : 0;
    }

    public int tahunLength() 
    {
        return String.valueOf(tahun).length();
    }
}
