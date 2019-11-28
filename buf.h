struct buf {
  int flags; // buf status 
  uint dev; // device flag, we may have mutiple devices
  uint blockno; // block no on disk
  struct sleeplock lock; // a lock for sleeplock
  uint refcnt;
  struct buf *prev; // LRU cache list
  struct buf *next;
  struct buf *qnext; // disk queue
  uchar data[BSIZE]; // size of one buf is 512KB
};
#define B_VALID 0x2  // buffer has been read from disk
#define B_DIRTY 0x4  // buffer needs to be written to disk

