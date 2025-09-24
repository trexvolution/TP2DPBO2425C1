from Device import Device  # misalnya class Device disimpan di device.py

class Brand(Device):
    def __init__(self, id="", nama="", harga=0, device="", jenis="", bahan="", brand="", negara="", tahun=0):
        super().__init__(id, nama, harga, device, jenis, bahan)  # panggil constructor Device
        self.__nama_brand = brand
        self.__negara = negara
        self.__tahun = tahun

    # Setter
    def set_nama_brand(self, nama_brand):
        self.__nama_brand = nama_brand

    def set_negara(self, negara):
        self.__negara = negara

    def set_tahun(self, tahun):
        self.__tahun = tahun

    # Getter
    def get_nama_brand(self):
        return self.__nama_brand

    def get_negara(self):
        return self.__negara

    def get_tahun(self):
        return self.__tahun

    # Method tambahan
    def namabrand_length(self):
        return len(self.__nama_brand)

    def negara_length(self):
        return len(self.__negara)

    def tahun_length(self):
        return len(str(self.__tahun))

    # Destructor opsional
    def __del__(self):
        pass
