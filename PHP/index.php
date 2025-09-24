<?php
require_once "Items.php";
require_once "Device.php";
require_once "Brand.php";
session_start();

// ✅ Inisialisasi data awal hanya sekali
if (!isset($_SESSION['listBrand'])) {
    $_SESSION['listBrand'] = [
        new Brand("A001", "Samsung Galaxy S26", 20000000, "Android", "Hardware", "Alumunium", "Samsung", "China", 2026, "uploads/samsung.jpg"),
        new Brand("A002", "Iphone 17 Pro Max", 25000000, "IOS", "Hardware", "Baja", "Apple", "Amerika", 2026, "uploads/iphone.jpg"),
        new Brand("A003", "ROG Zephyrus 16", 30000000, "Laptop Gaming", "Hardware", "Baja", "Asus", "Amerika", 2024, "uploads/rog.jpg"),
        new Brand("A004", "Macbook M5", 30000000, "Laptop IOS", "Hardware", "Alumunium", "Apple", "Amerika", 2026, "uploads/macbook.jpg"),
        new Brand("A005", "Techno Pova 7 Pro", 10000000, "Android", "Hardware", "Baja", "Techno", "China", 2026, "uploads/tecno.jpg"),
    ];
}

// ✅ Tambah data baru tanpa reset session
if (isset($_POST['tambah'])) {
    $foto = "";
    if (!empty($_FILES['foto']['name'])) {
        $targetDir = "uploads/";
        if (!is_dir($targetDir)) {
            mkdir($targetDir, 0777, true);
        }
        $foto = $targetDir . basename($_FILES['foto']['name']);
        move_uploaded_file($_FILES['foto']['tmp_name'], $foto);
    }

    $brand = new Brand(
        $_POST['id'],
        $_POST['nama'],
        (int)$_POST['harga'],
        $_POST['device'],
        $_POST['jenis'],
        $_POST['bahan'],
        $_POST['brand'],
        $_POST['negara'],
        (int)$_POST['tahun'],
        $foto
    );

    $_SESSION['listBrand'][] = $brand;
}
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Daftar Brand</title>
    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0/dist/css/bootstrap.min.css">
</head>
<body class="bg-light">

<div class="container mt-4">
    <h3 class="mb-3">Tambah Data Brand</h3>
    <form method="POST" enctype="multipart/form-data" class="card card-body shadow-sm mb-4">
        <input type="text" name="id" placeholder="ID" class="form-control mb-2" required>
        <input type="text" name="nama" placeholder="Nama Item" class="form-control mb-2" required>
        <input type="number" name="harga" placeholder="Harga" class="form-control mb-2" required>
        <input type="text" name="device" placeholder="Nama Device" class="form-control mb-2" required>
        <input type="text" name="jenis" placeholder="Jenis Perangkat" class="form-control mb-2" required>
        <input type="text" name="bahan" placeholder="Bahan" class="form-control mb-2" required>
        <input type="text" name="brand" placeholder="Nama Brand" class="form-control mb-2" required>
        <input type="text" name="negara" placeholder="Negara" class="form-control mb-2" required>
        <input type="number" name="tahun" placeholder="Tahun" class="form-control mb-2" required>
        <input type="file" name="foto" class="form-control mb-3">
        <button type="submit" name="tambah" class="btn btn-success">Tambah</button>
    </form>

    <h3>Daftar Brand</h3>
    <table class="table table-bordered table-striped text-center align-middle">
        <thead class="table-primary">
            <tr>
                <th>Foto</th>
                <th>ID</th>
                <th>Nama Item</th>
                <th>Harga</th>
                <th>Device</th>
                <th>Jenis</th>
                <th>Bahan</th>
                <th>Brand</th>
                <th>Negara</th>
                <th>Tahun</th>
            </tr>
        </thead>
        <tbody>
            <?php foreach ($_SESSION['listBrand'] as $item): ?>
                <tr>
                    <td>
                        <?php if ($item->getFoto()): ?>
                            <img src="<?= $item->getFoto() ?>" width="80" height="80" style="object-fit:cover;">
                        <?php else: ?>
                            -
                        <?php endif; ?>
                    </td>
                    <td><?= $item->getId() ?></td>
                    <td><?= $item->getNamaItems() ?></td>
                    <td><?= number_format($item->getHarga(), 0, ',', '.') ?></td>
                    <td><?= $item->getNamaDevice() ?></td>
                    <td><?= $item->getJenisPerangkat() ?></td>
                    <td><?= $item->getBahan() ?></td>
                    <td><?= $item->getNamaBrand() ?></td>
                    <td><?= $item->getNegara() ?></td>
                    <td><?= $item->getTahun() ?></td>
                </tr>
            <?php endforeach; ?>
        </tbody>
    </table>
</div>

</body>
</html>
