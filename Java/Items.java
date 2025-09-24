public class Items 
{

    // atribut private
    private String id;
    private String namaItems;
    private int harga;

    // constructor default
    public Items() {}

    // constructor dengan parameter
    public Items(String id, String nama, int harga) 
    {
        this.id = id;
        this.namaItems = nama;
        this.harga = harga;
    }

    // Setter
    public void setId(String id) 
    {
        this.id = id;
    }

    public void setNamaItems(String namaItems) 
    {
        this.namaItems = namaItems;
    }

    public void setHarga(int harga) 
    {
        this.harga = harga;
    }

    // Getter
    public String getId() 
    {
        return this.id;
    }

    public String getNamaItems() 
    {
        return this.namaItems;
    }

    public int getHarga() 
    {
        return this.harga;
    }

    // Method tambahan
    public int idLength() 
    {
        return id != null ? id.length() : 0;
    }

    public int nameLength() 
    {
        return namaItems != null ? namaItems.length() : 0;
    }

    public int hargaLength() 
    {
        return String.valueOf(harga).length();
    }
}
