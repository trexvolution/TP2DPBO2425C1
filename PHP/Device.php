<?php
require_once "Items.php";

class Device extends Items {
    private $nama_device;
    private $jenis_perangkat;
    private $bahan;

    public function __construct($id = "", $nama = "", $harga = 0, $device = "", $jenis = "", $bahan = "", $foto = "uploads/default.jpg") {
        parent::__construct($id, $nama, $harga, $foto);
        $this->nama_device = $device;
        $this->jenis_perangkat = $jenis;
        $this->bahan = $bahan;
    }

    // Setter
    public function setNamaDevice($nama_device) { $this->nama_device = $nama_device; }
    public function setJenisPerangkat($jenis_perangkat) { $this->jenis_perangkat = $jenis_perangkat; }
    public function setBahan($bahan) { $this->bahan = $bahan; }

    // Getter
    public function getNamaDevice() { return $this->nama_device; }
    public function getJenisPerangkat() { return $this->jenis_perangkat; }
    public function getBahan() { return $this->bahan; }
}
?>
