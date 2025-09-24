<?php
require_once "Device.php";

class Brand extends Device {
    private $nama_brand;
    private $negara;
    private $tahun;

    public function __construct($id = "", $nama = "", $harga = 0, $device = "", $jenis = "", $bahan = "", $brand = "", $negara = "", $tahun = 0, $foto = "uploads/default.jpg") {
        parent::__construct($id, $nama, $harga, $device, $jenis, $bahan, $foto);
        $this->nama_brand = $brand;
        $this->negara = $negara;
        $this->tahun = $tahun;
    }

    // Setter
    public function setNamaBrand($nama_brand) { $this->nama_brand = $nama_brand; }
    public function setNegara($negara) { $this->negara = $negara; }
    public function setTahun($tahun) { $this->tahun = $tahun; }

    // Getter
    public function getNamaBrand() { return $this->nama_brand; }
    public function getNegara() { return $this->negara; }
    public function getTahun() { return $this->tahun; }
}
?>
