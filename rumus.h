#define PI 3.14

float LuasLingkaran(float radius){
    return(PI * radius * radius);
}

float LPermukaanBola(float radius){
    return(4 * PI * radius * radius);
}

float VolumeSilinder(float radius, float tinggi){
    return(PI * radius * radius * tinggi);
}

float VolumeBola(float radius){
    return((4/3) * PI * radius * radius);
}

float VolumeKubus(float sisi){
    return(sisi * sisi * sisi);
}