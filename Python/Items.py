class Items:
    def __init__(self, id="", nama_items="", harga=0):
        self.__id = id
        self.__nama_items = nama_items
        self.__harga = harga

    # Setter
    def set_id(self, id):
        self.__id = id

    def set_nama_items(self, nama_items):
        self.__nama_items = nama_items

    def set_harga(self, harga):
        self.__harga = harga

    # Getter
    def get_id(self):
        return self.__id

    def get_nama_items(self):
        return self.__nama_items

    def get_harga(self):
        return self.__harga

    # Tambahan method sesuai C++
    def id_length(self):
        return len(self.__id)

    def name_length(self):
        return len(self.__nama_items)

    def harga_length(self):
        return len(str(self.__harga))

    # Destructor opsional
    def __del__(self):
        pass