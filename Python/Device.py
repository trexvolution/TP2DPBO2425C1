from Items import Items  # misalnya class Items disimpan di file items.py

class Device(Items):
    def __init__(self, id="", nama="", harga=0, device="", jenis="", bahan=""):
        super().__init__(id, nama, harga)  # panggil constructor Items
        self.__nama_device = device
        self.__jenis_perangkat = jenis
        self.__bahan = bahan

    # Setter
    def set_nama_device(self, nama_device):
        self.__nama_device = nama_device

    def set_jenis_perangkat(self, jenis_perangkat):
        self.__jenis_perangkat = jenis_perangkat

    def set_bahan(self, bahan):
        self.__bahan = bahan

    # Getter
    def get_nama_device(self):
        return self.__nama_device

    def get_jenis_perangkat(self):
        return self.__jenis_perangkat

    def get_bahan(self):
        return self.__bahan

    # Method tambahan
    def namedevice_length(self):
        return len(self.__nama_device)

    def jenis_length(self):
        return len(self.__jenis_perangkat)

    def bahan_length(self):
        return len(self.__bahan)

    # Destructor opsional
    def __del__(self):
        pass