
// Set the clock position

int clock_pos = 24;

void hour_block(int num)
{
  int a = num/10;
  int b = num % 10;

  int idx = clock_pos;

  int cr = 0;
  int cg = 0;
  int cb = 0;
  int cw = 0;

  cr = 6*lum;  cg = 2*lum; cb = 0*lum;  cw = 0*lum;

  if (a == 0)
  {
    { block.setPixelColor(idx+0,0,0,0,0); block.setPixelColor(idx+8,0,0,0,0); block.setPixelColor(idx+16,0,0,0,0); }
    { block.show(); }
  }
  else if (a == 1)
  {
    { block.setPixelColor(idx+0,0,0,0,0); block.setPixelColor(idx+8,cr,cg,cb,cw); block.setPixelColor(idx+16,0,0,0,0); }
    { block.show(); }
  }
  else if (a == 2)
  {
    { block.setPixelColor(idx+0,cr,cg,cb,cw); block.setPixelColor(idx+8,0,0,0,0); block.setPixelColor(idx+16,cr,cg,cb,cw); }
    { block.show(); }
  }
  else if (a == 3)
  {
    { block.setPixelColor(idx+0,cr,cg,cb,cw); block.setPixelColor(idx+8,cr,cg,cb,cw); block.setPixelColor(idx+16,cr,cg,cb,cw); }
    { block.show(); }
  }

  block_call(idx+1, cr, cg, cb, cw, b);
}

void day_array(int num)
{
  int idx = 7;

  int xr = 0;
  int xg = 0;
  int xb = 0;
  int xw = 0;
  
  int cr = 0;
  int cg = 0;
  int cb = 0;
  int cw = 0;

  int yr = 0;
  int yg = 0;
  int yb = 0;
  int yw = 0;

  xr = 0*lum;  xg = 2*lum; xb = 3*lum;  xw = 0*lum;
  cr = 8*lum;  cg = 1*lum; cb = 0*lum;  cw = 0*lum;
  yr = 0*lum;  yg = 0*lum; yb = 0*lum;  yw = 2*lum;
  
  
  if (num == 1)
  {
    block.setPixelColor(8*idx+0, cr,cg,cb,cw); block.setPixelColor(8*idx+1, cr,cg,cb,cw); block.setPixelColor(8*idx+2, cr,cg,cb,cw); block.setPixelColor(8*idx+3, xr,xg,xb,xw);
    block.setPixelColor(8*idx+4, xr,xg,xb,xw); block.setPixelColor(8*idx+5, xr,xg,xb,xw); block.setPixelColor(8*idx+6, xr,xg,xb,xw); block.setPixelColor(8*idx+7, xr,xg,xb,xw);
    block.setPixelColor(8*idx+0+64, xr,xg,xb,xw); block.setPixelColor(8*idx+1+64, xr,xg,xb,xw); block.setPixelColor(8*idx+2+64, xr,xg,xb,xw); block.setPixelColor(8*idx+3+64, xr,xg,xb,xw);
    block.setPixelColor(8*idx+4+64, xr,xg,xb,xw); block.setPixelColor(8*idx+5+64, xr,xg,xb,xw); block.setPixelColor(8*idx+6+64, xr,xg,xb,xw); block.setPixelColor(8*idx+7+64, yr,yg,yb,yw);
  }
  else if (num == 2)
  {
    block.setPixelColor(8*idx+0, xr,xg,xb,xw); block.setPixelColor(8*idx+1, xr,xg,xb,xw); block.setPixelColor(8*idx+2, cr,cg,cb,cw); block.setPixelColor(8*idx+3, cr,cg,cb,cw);
    block.setPixelColor(8*idx+4, cr,cg,cb,cw); block.setPixelColor(8*idx+5, xr,xg,xb,xw); block.setPixelColor(8*idx+6, xr,xg,xb,xw); block.setPixelColor(8*idx+7, xr,xg,xb,xw);
    block.setPixelColor(8*idx+0+64, xr,xg,xb,xw); block.setPixelColor(8*idx+1+64, xr,xg,xb,xw); block.setPixelColor(8*idx+2+64, xr,xg,xb,xw); block.setPixelColor(8*idx+3+64, xr,xg,xb,xw);
    block.setPixelColor(8*idx+4+64, xr,xg,xb,xw); block.setPixelColor(8*idx+5+64, xr,xg,xb,xw); block.setPixelColor(8*idx+6+64, xr,xg,xb,xw); block.setPixelColor(8*idx+7+64, yr,yg,yb,yw);
  }
  else if (num == 3)
  {
    block.setPixelColor(8*idx+0, xr,xg,xb,xw); block.setPixelColor(8*idx+1, xr,xg,xb,xw); block.setPixelColor(8*idx+2, xr,xg,xb,xw); block.setPixelColor(8*idx+3, xr,xg,xb,xw);
    block.setPixelColor(8*idx+4, cr,cg,cb,cw); block.setPixelColor(8*idx+5, cr,cg,cb,cw); block.setPixelColor(8*idx+6, cr,cg,cb,cw); block.setPixelColor(8*idx+7, xr,xg,xb,xw);
    block.setPixelColor(8*idx+0+64, xr,xg,xb,xw); block.setPixelColor(8*idx+1+64, xr,xg,xb,xw); block.setPixelColor(8*idx+2+64, xr,xg,xb,xw); block.setPixelColor(8*idx+3+64, xr,xg,xb,xw);
    block.setPixelColor(8*idx+4+64, xr,xg,xb,xw); block.setPixelColor(8*idx+5+64, xr,xg,xb,xw); block.setPixelColor(8*idx+6+64, xr,xg,xb,xw); block.setPixelColor(8*idx+7+64, yr,yg,yb,yw);
  }
  else if (num == 4)
  {
    block.setPixelColor(8*idx+0, xr,xg,xb,xw); block.setPixelColor(8*idx+1, xr,xg,xb,xw); block.setPixelColor(8*idx+2, xr,xg,xb,xw); block.setPixelColor(8*idx+3, xr,xg,xb,xw);
    block.setPixelColor(8*idx+4, xr,xg,xb,xw); block.setPixelColor(8*idx+5, xr,xg,xb,xw); block.setPixelColor(8*idx+6, cr,cg,cb,cw); block.setPixelColor(8*idx+7, cr,cg,cb,cw);
    block.setPixelColor(8*idx+0+64, cr,cg,cb,cw); block.setPixelColor(8*idx+1+64, xr,xg,xb,xw); block.setPixelColor(8*idx+2+64, xr,xg,xb,xw); block.setPixelColor(8*idx+3+64, xr,xg,xb,xw);
    block.setPixelColor(8*idx+4+64, xr,xg,xb,xw); block.setPixelColor(8*idx+5+64, xr,xg,xb,xw); block.setPixelColor(8*idx+6+64, xr,xg,xb,xw); block.setPixelColor(8*idx+7+64, yr,yg,yb,yw);
  }
  else if (num == 5)
  {
    block.setPixelColor(8*idx+0, xr,xg,xb,xw); block.setPixelColor(8*idx+1, xr,xg,xb,xw); block.setPixelColor(8*idx+2, xr,xg,xb,xw); block.setPixelColor(8*idx+3, xr,xg,xb,xw);
    block.setPixelColor(8*idx+4, xr,xg,xb,xw); block.setPixelColor(8*idx+5, xr,xg,xb,xw); block.setPixelColor(8*idx+6, xr,xg,xb,xw); block.setPixelColor(8*idx+7, xr,xg,xb,xw);
    block.setPixelColor(8*idx+0+64, cr,cg,cb,cw); block.setPixelColor(8*idx+1+64, cr,cg,cb,cw); block.setPixelColor(8*idx+2+64, cr,cg,cb,cw); block.setPixelColor(8*idx+3+64, xr,xg,xb,xw);
    block.setPixelColor(8*idx+4+64, xr,xg,xb,xw); block.setPixelColor(8*idx+5+64, xr,xg,xb,xw); block.setPixelColor(8*idx+6+64, xr,xg,xb,xw); block.setPixelColor(8*idx+7+64, yr,yg,yb,yw);
  }
  else if (num == 6)
  {
    block.setPixelColor(8*idx+0, xr,xg,xb,xw); block.setPixelColor(8*idx+1, xr,xg,xb,xw); block.setPixelColor(8*idx+2, xr,xg,xb,xw); block.setPixelColor(8*idx+3, xr,xg,xb,xw);
    block.setPixelColor(8*idx+4, xr,xg,xb,xw); block.setPixelColor(8*idx+5, xr,xg,xb,xw); block.setPixelColor(8*idx+6, xr,xg,xb,xw); block.setPixelColor(8*idx+7, xr,xg,xb,xw);
    block.setPixelColor(8*idx+0+64, xr,xg,xb,xw); block.setPixelColor(8*idx+1+64, xr,xg,xb,xw); block.setPixelColor(8*idx+2+64, cr,cg,cb,cw); block.setPixelColor(8*idx+3+64, cr,cg,cb,cw);
    block.setPixelColor(8*idx+4+64, cr,cg,cb,cw); block.setPixelColor(8*idx+5+64, xr,xg,xb,xw); block.setPixelColor(8*idx+6+64, xr,xg,xb,xw); block.setPixelColor(8*idx+7+64, yr,yg,yb,yw);
  }
  else if (num == 7)
  {
    block.setPixelColor(8*idx+0, xr,xg,xb,xw); block.setPixelColor(8*idx+1, xr,xg,xb,xw); block.setPixelColor(8*idx+2, xr,xg,xb,xw); block.setPixelColor(8*idx+3, xr,xg,xb,xw);
    block.setPixelColor(8*idx+4, xr,xg,xb,xw); block.setPixelColor(8*idx+5, xr,xg,xb,xw); block.setPixelColor(8*idx+6, xr,xg,xb,xw); block.setPixelColor(8*idx+7, xr,xg,xb,xw);
    block.setPixelColor(8*idx+0+64, xr,xg,xb,xw); block.setPixelColor(8*idx+1+64, xr,xg,xb,xw); block.setPixelColor(8*idx+2+64, xr,xg,xb,xw); block.setPixelColor(8*idx+3+64, xr,xg,xb,xw);
    block.setPixelColor(8*idx+4+64, cr,cg,cb,cw); block.setPixelColor(8*idx+5+64, cr,cg,cb,cw); block.setPixelColor(8*idx+6+64, cr,cg,cb,cw); block.setPixelColor(8*idx+7+64, yr,yg,yb,yw);
  }
  else
  {
    block.setPixelColor(8*idx+0, xr,xg,xb,xw); block.setPixelColor(8*idx+1, xr,xg,xb,xw); block.setPixelColor(8*idx+2, xr,xg,xb,xw); block.setPixelColor(8*idx+3, xr,xg,xb,xw);
    block.setPixelColor(8*idx+4, xr,xg,xb,xw); block.setPixelColor(8*idx+5, xr,xg,xb,xw); block.setPixelColor(8*idx+6, xr,xg,xb,xw); block.setPixelColor(8*idx+7, xr,xg,xb,xw);
    block.setPixelColor(8*idx+0+64, xr,xg,xb,xw); block.setPixelColor(8*idx+1+64, xr,xg,xb,xw); block.setPixelColor(8*idx+2+64, xr,xg,xb,xw); block.setPixelColor(8*idx+3+64, xr,xg,xb,xw);
    block.setPixelColor(8*idx+4+64, xr,xg,xb,xw); block.setPixelColor(8*idx+5+64, xr,xg,xb,xw); block.setPixelColor(8*idx+6+64, xr,xg,xb,xw); block.setPixelColor(8*idx+7+64, yr,yg,yb,yw);
  }

  block.show();

}

unsigned long pmillc = 0; 
int place = 0;

void min_block(int minutes)
{  
  int cr = 24;
  int cg = 8;
  int cb = 0;
  int cw = 4;
  int idx = clock_pos;
  
  unsigned long currentMillis = millis();
  if (currentMillis - pmillc >= 1000)
  {
    pmillc = currentMillis;
    if (place == 0) 
    {
      place = 1;
    } else {
      place = 0;
    }
  }
  int a = minutes /10;  int b = minutes % 10;
  if(place == 0)
  {
     cr = 0*lum;  cg = 6*lum; cb = 2*lum;  cw = 0*lum;
     block_call(idx+5, cr, cg, cb, cw, a);

  }  
  else
  {  cr = 0*lum;  cg = 0*lum; cb = 1*lum;  cw = 3*lum;
     block_call(idx+5, cr, cg, cb, cw, b);
  }
  
}


void showClock(int hour, int minutes)
{
  if(cb >= 10) cb = 10;
  time_hr = 24*cb; time_hg = 8*cb; time_hb = 0*cb;
  hour_block(hour);
  //time_hr = 0; time_hg = 20; time_hb = 2;
  min_block(minutes);



  //showDay(2, 6);
  
}



void date_block(int num)
{
  int a = num/10;
  int b = num % 10;

  int idx = 64+3*8+4;

  int cr = lum*0;
  int cg = lum*4;
  int cb = lum*0;
  int cw = lum*0;

  if (a == 0)
  {
    { block.setPixelColor(idx+0,0,0,0,0); block.setPixelColor(idx+8,0,0,0,0); block.setPixelColor(idx+16,0,0,0,0); }
    { block.show(); }
  }
  else if (a == 1)
  {
    { block.setPixelColor(idx+0,0,0,0,0); block.setPixelColor(idx+8,cr,cg,cb,cw); block.setPixelColor(idx+16,0,0,0,0); }
    { block.show(); }
  }
  else if (a == 2)
  {
    { block.setPixelColor(idx+0,cr,cg,cb,cw); block.setPixelColor(idx+8,0,0,0,0); block.setPixelColor(idx+16,cr,cg,cb,cw); }
    { block.show(); }
  }
  else if (a == 3)
  {
    { block.setPixelColor(idx+0,cr,cg,cb,cw); block.setPixelColor(idx+8,cr,cg,cb,cw); block.setPixelColor(idx+16,cr,cg,cb,cw); }
    { block.show(); }
  }

  block_call(idx+1, cr, cg, cb, cw, b);
}


void block_call(int idx, int cr, int cg, int cb, int cw, int number)
{
  int i = idx;
  if (number == 0)
  {
    { 
      block.setPixelColor(i+0,  0, 0, 0, 0);    block.setPixelColor(i+1,  0, 0, 0, 0);    block.setPixelColor(i+2,  0, 0, 0, 0);
      block.setPixelColor(i+8,  0, 0, 0, 0);    block.setPixelColor(i+9,  0, 0, 0, 0);    block.setPixelColor(i+10, 0, 0, 0, 0);
      block.setPixelColor(i+16, 0, 0, 0, 0);    block.setPixelColor(i+17, 0, 0, 0, 0);    block.setPixelColor(i+18, 0, 0, 0, 0);      
    }
    block.show();
  }
  else if (number == 1)
  {
    { 
      block.setPixelColor(i+0,  0, 0, 0, 0);    block.setPixelColor(i+1,  0, 0, 0, 0);     block.setPixelColor(i+2,  0, 0, 0, 0);
      block.setPixelColor(i+8,  0, 0, 0, 0);    block.setPixelColor(i+9,  cr, cg, cb, cw); block.setPixelColor(i+10, 0, 0, 0, 0);
      block.setPixelColor(i+16, 0, 0, 0, 0);    block.setPixelColor(i+17, 0, 0, 0, 0);     block.setPixelColor(i+18, 0, 0, 0, 0);      
    }
    block.setPixelColor(i+9, cr, cg, cb, cw);   
    block.show();
  }

   else if (number == 2)
  {
    { 
      block.setPixelColor(i+0,  cr, cg, cb, cw); block.setPixelColor(i+1,  0, 0, 0, 0);     block.setPixelColor(i+2,  0, 0, 0, 0);
      block.setPixelColor(i+8,  0, 0, 0, 0);     block.setPixelColor(i+9,  0, 0, 0, 0);     block.setPixelColor(i+10, 0, 0, 0, 0);
      block.setPixelColor(i+16, 0, 0, 0, 0);     block.setPixelColor(i+17, 0, 0, 0, 0);     block.setPixelColor(i+18, cr, cg, cb, cw);      
    }
    block.show(); 
  }

  else if (number == 3)
  {
    { 
      block.setPixelColor(i+0,  cr, cg, cb, cw); block.setPixelColor(i+1,  0, 0, 0, 0);     block.setPixelColor(i+2,  0, 0, 0, 0);
      block.setPixelColor(i+8,  0, 0, 0, 0);     block.setPixelColor(i+9,  cr, cg, cb, cw); block.setPixelColor(i+10, 0, 0, 0, 0);
      block.setPixelColor(i+16, 0, 0, 0, 0);     block.setPixelColor(i+17, 0, 0, 0, 0);     block.setPixelColor(i+18, cr, cg, cb, cw);      
    }
    block.show(); 
  }

  else if (number == 4)
  {
    { 
      block.setPixelColor(i+0,  cr, cg, cb, cw); block.setPixelColor(i+1,  0, 0, 0, 0);     block.setPixelColor(i+2,  cr, cg, cb, cw);
      block.setPixelColor(i+8,  0, 0, 0, 0);     block.setPixelColor(i+9,  0, 0, 0, 0);     block.setPixelColor(i+10, 0, 0, 0, 0);
      block.setPixelColor(i+16, cr, cg, cb, cw); block.setPixelColor(i+17, 0, 0, 0, 0);     block.setPixelColor(i+18, cr, cg, cb, cw);      
    } 
    block.show(); 
  }

  else if (number == 5)
  {
    { 
      block.setPixelColor(i+0,  cr, cg, cb, cw); block.setPixelColor(i+1,  0, 0, 0, 0);     block.setPixelColor(i+2,  cr, cg, cb, cw);
      block.setPixelColor(i+8,  0, 0, 0, 0);     block.setPixelColor(i+9,  cr, cg, cb, cw); block.setPixelColor(i+10, 0, 0, 0, 0);
      block.setPixelColor(i+16, cr, cg, cb, cw); block.setPixelColor(i+17, 0, 0, 0, 0);     block.setPixelColor(i+18, cr, cg, cb, cw);      
    }
    block.show(); 
  }

  else if (number == 6)
  {
    { 
      block.setPixelColor(i+0,  cr, cg, cb, cw); block.setPixelColor(i+1,  0, 0, 0, 0);     block.setPixelColor(i+2,  cr, cg, cb, cw);
      block.setPixelColor(i+8,  cr, cg, cb, cw); block.setPixelColor(i+9,  0, 0, 0, 0);     block.setPixelColor(i+10, cr, cg, cb, cw);
      block.setPixelColor(i+16, cr, cg, cb, cw); block.setPixelColor(i+17, 0, 0, 0, 0);     block.setPixelColor(i+18, cr, cg, cb, cw);      
    }
    block.show();    
  }

  else if (number == 7)
  {
    { 
      block.setPixelColor(i+0,  cr, cg, cb, cw); block.setPixelColor(i+1,  0, 0, 0, 0);     block.setPixelColor(i+2,  cr, cg, cb, cw);
      block.setPixelColor(i+8,  cr, cg, cb, cw); block.setPixelColor(i+9,  0, 0, 0, 0);     block.setPixelColor(i+10, cr, cg, cb, cw);
      block.setPixelColor(i+16, cr, cg, cb, cw); block.setPixelColor(i+17, cr, cg, cb, cw); block.setPixelColor(i+18, cr, cg, cb, cw);      
    }
    block.show(); 
  }

  else if (number == 8)
  {
    { 
      block.setPixelColor(i+0,  cr, cg, cb, cw); block.setPixelColor(i+1,  0, 0, 0, 0);     block.setPixelColor(i+2,  cr, cg, cb, cw);
      block.setPixelColor(i+8,  cr, cg, cb, cw); block.setPixelColor(i+9,  cr, cg, cb, cw); block.setPixelColor(i+10, cr, cg, cb, cw);
      block.setPixelColor(i+16, cr, cg, cb, cw); block.setPixelColor(i+17, cr, cg, cb, cw); block.setPixelColor(i+18, cr, cg, cb, cw);      
    }
    block.show(); 
  }

  else if (number == 9)
  {
    { 
      block.setPixelColor(i+0,  cr, cg, cb, cw); block.setPixelColor(i+1,  cr, cg, cb, cw); block.setPixelColor(i+2,  cr, cg, cb, cw);
      block.setPixelColor(i+8,  cr, cg, cb, cw); block.setPixelColor(i+9,  cr, cg, cb, cw); block.setPixelColor(i+10, cr, cg, cb, cw);
      block.setPixelColor(i+16, cr, cg, cb, cw); block.setPixelColor(i+17, cr, cg, cb, cw); block.setPixelColor(i+18, cr, cg, cb, cw);      
    }
    block.show();
  
  }

}
