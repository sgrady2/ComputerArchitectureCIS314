void copy_int(int val, void *buf, int maxbytes) {
    if (maxbytes-sizeof(val) >= 0)
            memcpy(buf, (void *) &val, sizeof(val));
}


//A. sizeof(val) will return a value of type size_t which is an unsigned value. Eric mentioned this is problematic inclass
// because our maxbytes is of type signed integer so when we do int-unsigned >= 0, the conditional will always succeed.
//B. One way I could solve this problem is by casting type sizeof(val) to a signed integer like in the following code
//
void copy_int(int val, void *buf, int maxbytes) {
    if (maxbytes-(int)sizeof(val) >= 0)
            memcpy(buf, (void *) &val, sizeof(val));
}
