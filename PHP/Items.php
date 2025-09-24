<?php
class Items {
    private $id;
    private $nama_items;
    private $harga;
    private $foto;

    public function __construct($id = "", $nama = "", $harga = 0, $foto = "uploads/default.jpg") {
        $this->id = $id;
        $this->nama_items = $nama;
        $this->harga = $harga;
        $this->foto = $foto;
    }

    // Setter
    public function setId($id) { $this->id = $id; }
    public function setNamaItems($nama_items) { $this->nama_items = $nama_items; }
    public function setHarga($harga) { $this->harga = $harga; }
    public function setFoto($foto) { $this->foto = $foto; }

    // Getter
    public function getId() { return $this->id; }
    public function getNamaItems() { return $this->nama_items; }
    public function getHarga() { return $this->harga; }
    public function getFoto() { return $this->foto; }
}
?>
