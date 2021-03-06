
// Структура описателя раздела
struct ptable_line{
    char name[16];
    unsigned start;
    unsigned lsize;
    unsigned length;
    unsigned loadaddr;   
    unsigned entry;      
    unsigned type;  
    unsigned nproperty;  // флаги раздела
    unsigned count;
};

// Полная структура страницы таблицы разделов
struct ptable_t {
  uint8_t head[16];
  uint8_t version[16];
  uint8_t product[16];
  struct ptable_line part[41];
  uint8_t tail[32];
};

// сигнатура заголовка таблицы  
extern const uint8_t headmagic[16];

void parts_fill(QTableWidget* ptedit,void* ptimage);
int is_ptable(void* ptimage);
