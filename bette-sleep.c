#include <stdio.h>
#include <errno.h>
#include <time.h>

int better_sleep (double sleep_time)
{
  struct timespec tv;
  /* Construit l'objet timespec à partir du nombre entier de seconde...  */
  tv.tv_sec = (time_t) sleep_time;
  /* ... et le reste en nanosecondes. */
  tv.tv_nsec = (long) ((sleep_time - tv.tv_sec) * 1e+9);

  while (1)
  {
    /* Suspend l'exécution pour un temps spécifié par tv. Si l'on est
       interrompu par un signal, le temps restant est replacé dans tv. */
    int rval = nanosleep (&tv, &tv);
    if (rval == 0)
      /* On a suspendu l'exécution pour le temps demandé ; terminé. */
      return 0;
    else if (errno == EINTR)
      /* Interrompu par un signal. Réessaie. */
      continue;
    else
      /* Autre erreur, abandon. */
      return rval;
  }
  return 0;
}

int main(){
double nano=0;
while(1){
	
	better_sleep(0.05);
	printf("Hello ,%.3f\n",nano);
	nano=nano+0.05;
	time_t rawtime;
  	struct tm * timeinfo;

  	time ( &rawtime );
  	timeinfo = localtime ( &rawtime );
  	printf ( "Current local time and date: %s", asctime (timeinfo) );
}
return 0;
}
