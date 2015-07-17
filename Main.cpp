#include <iostream>
#include <string>
#include <vector>
#include "Player.h"
#include <stdlib.h>
using namespace std;

void scene_a();
void scene_b();
void scene_c();
void scene_ch();
void scene_d();
void scene_e();
void scene_f();
void scene_g();
void scene_h();
void scene_i();
void scene_j();
void scene_k();
void scene_l();
void scene_m();
void scene_n();
void scene_o();
void scene_p();
void scene_q();
void scene_r();
void scene_s();
void scene_t();
void scene_u();
void scene_v();
void scene_w();
void scene_x();
void scene_y();
void scene_z();
void scene_za();
void scene_aa();
void scene_ab();
void scene_ac();
void scene_ad();
void scene_ae();
void scene_af();
void scene_ag();
void scene_ai();
void scene_aj();
void scene_gg();
void scene_end();
void printlines();


bool ButtPlug = false;
bool key = false;

int main(){
    string name;
    cout << "Enter your name:" << endl;
    cin >> name;
    string location = "Arctic Circle";
    
    cout << "Hello, " << name << "!  Welcome to The Young Scholars Program Program, a text-based game where you choose your own path and explore the world around you.\nYou play by selecting the option you want to pursue.  But beware, your choices determine your fate. Press 'enter' to begin.\n" << endl;
    cin.get();
    cin.get();
    scene_a();
    return 0;
}
void printlines(){
  for (int i = 0; i < 40; i++)
            cout << endl;
}
void scene_a(){
  printlines();
  cout << "Location: Artic Circle\n\nYou see a vast expanse of snow-laden plains with a sheer abscence of greenery. \nThe wind whispers as you look up into the sky, and see the sun. \nIt shines, yet provides no warmth.\nWhat would you like to do?" << endl;
  cout << "\n\n1. Move North\n2. Move South\n3. Move East\n4. Move West\n5. Kill yourself" << endl;
    
  int choice_a;
  cin >> choice_a;
  switch (choice_a) {
    case 1: scene_b();
    case 2: scene_b();
    case 3: scene_b();
    case 4: scene_b();
    case 5: scene_c();
    default: cout << "Type a fucking number." << endl;
      }
}
 
void scene_b(){
  printlines();
    cout << "\n\nAs you walk, you spot a figure in the distance hurtling toward you. \nThrough the heavy blur of the snowfall, you make out the face of a polar bear. \nIt is racing toward you. \nWhat do you do?\n\n1. Attack the polar bear with your knife\n2. Run away from the polar bear\n3. Make yourself as large as possible and roar in an attempt to scare away bear.\n4. Jump onto the bear's back and try to become his master." << endl;
    bool b_done = false;
    while (!b_done){
      int choice_b;
      cin >> choice_b;
      switch (choice_b) {
        case 1: cout << "\n\nYou run at the polar bear and unsheath your knife. \nHe swipes at you, but you dodge his blow. \nYou knife, guided by your hand, pierces his side, and he bleeds red into the white snow. \nHowever, he whips around, knocking you to the ground with his massive paw. \nYou feel his teeth sink into your skin as he takes a bite out of your stomach.\nPress 'enter' to continue." << endl;
          b_done = true;
          break;
        case 2: cout << "\n\nYou sprint away from the polar bear at full speed, and choose not to look back. \nAfter running for what feels like an eternity, you slow down. \nYou relax, confident that the polar bear is behind you. \nSuddenly, you feel the sharp sting of a claw penetrating your back, digging into your spine. \nAs you fall forcibly into the snow, the polar bear begins to work his teeth into your skull. \nPress 'enter' to continue." << endl;
          b_done = true;
          break;
        case 3: cout << "\n\nThe bear witnesses your impressive display, and visibly relaxes. \nHe whines and slowly walks toward you. \nYou keep eye contact with him and step foward. \nIt seems as if you two have a real bond. \nHis face is but inches from yours. \nHe forcefully pushes you to the ground and you fall on your stomach. \nHe mounts you and begins to hump. \nYou cannot breathe under the weight of the sexually aroused bear and are crushed.\nPress 'enter' to continue." << endl;
          b_done = true;
          break;
        case 4: cout << "\n\nThat is the dumbest thing you could do in this situation. \nThe polar bear kills you slowly and gruesomely.\nPress 'enter' to continue." << endl;
          b_done = true;
          break;
        default: cout << "\n\nType a fucking number." << endl;
      }
      b_done = true;
    }
    cin.get();
    cin.get();
    scene_c();
}
void scene_c() {
  printlines();
  cout << "\n\nLocation: Your Room\n\nYou wake up, drenched in sweat. \nIt's a saturday at YSP, and you have no plans.  \nYour roommate, Casey, has already left the room. \nYou get out of bed to see your desk, Casey's desk, your wardrobe and Casey's wardrobe.\n1. Examine your desk\n2. Examine Casey's desk\n3. Examine your wardrobe\n4. Examine Casey's wardrobe\n5. Enter your bathroom\n6. Exit your room" << endl;
  int choice_c;
  cin >> choice_c;
  switch (choice_c) {
    case 1: 
      scene_d();
    case 2: 
      scene_e();
    case 3: 
      scene_f();
    case 4:
      scene_g();
    case 5: 
      scene_h();
    case 6:
      scene_i();
    default:  cout << "\n\nType a fucking number.";
  }
}

void scene_d(){
  printlines();
  cout << "\n\n You see your laptop, some pencils, various books, and your signed picture of Dr. Dre.\n\n1. Open laptop\n2. Step back from desk" << endl;
  int choice_d;
  cin >> choice_d;
  switch (choice_d) {
      case 1: cout << "\n\nYou open your laptop, and it loads the last page you visited, pornhub.com.  \nYou slam the computer shut and step back from your desk.\nPress 'enter' to continue." << endl;
        cin.get();
        cin.get();
        scene_c();
      case 2: scene_c();
  }
}

void scene_e() {
  printlines();
  cout << "\n\nYou see a note on top of Casey's desk, along with some random assorted objects.\n1. Read note\n2. Exit Casey's desk" << endl;
  int choice_e;
  cin >> choice_e;
  switch (choice_e) {
      case 1: cout << "\n\nThe note reads:\"Hey dipshit.  Meet me in the common room tonight.  or else.\"\nPress 'enter' to continue." << endl;
        cin.get();
        cin.get();
        scene_c();
      case 2: scene_c();
  }
}

void scene_f() {
  printlines();
  bool f_done = false;
  while (!f_done){
    cout << "\n\nYou see all of you clothes, as well as your extensive erotic toy collection.\n\n1. Look through clothes\n2. Pick up erotic toy\n3. Exit your wardrobe" << endl;
    int choice_f;
    cin >> choice_f;
    switch (choice_f) {
      case 1: cout << "\nYou look through all of your clothes, but find nothing of any importance.\nPress 'enter' to continue." << endl;
        cin.get();
        cin.get();
        break;
      case 2: cout << "\nYou pick up a large ribbed object, and remove your pants.\nYou insert the butt plug, thinking that it may come in handy later.\nPress 'enter' to continue." << endl;
        ButtPlug = true;
        cin.get();
        cin.get();
        break;
      case 3: 
        f_done = true;
    }
  scene_c();
  }
}

void scene_g() {
  printlines();
  cout << "\n\nYou open the wardrobe and Casey's pet monkey leaps out at you.  He rubs poop on your face and you realize why monkeys are banned from YSP.  You subsequently shut the wardrobe.\nPress 'enter' to continue." << endl;
  cin.get();
  cin.get();
  scene_c();
}

void scene_h() {
  printlines();
  bool h_done = false;
  while (h_done == false) {
    cout << "\n\nYou enter the bathroom. There is a shower with curtain closed, a toilet, and a sink.\n\n1. Look in toilet\n2. Look in the shower\n3. Look in sink\n4. Exit your bathroom" << endl;
    int choice_h;
    cin >> choice_h;
    switch (choice_h){
      case 1: cout << "\n\nYou open the lid of the toilet and look in. It seems that Casey has left you a brown surprise in the toilet.\nPress 'enter' to continue." << endl;
        cin.get();
        cin.get();
        h_done = true;
        break;
      case 2: cout << "\n\nYou open the curtain and peek in the shower. To your dismay, there is nothing (or nobody) of interest in the shower.\nPress 'enter' to continue." << endl;
        cin.get();
        cin.get();
        h_done = true;
        break;
      case 3: cout << "\n\nNothing interesting in the sink.\nPress 'enter' to continue." << endl;
        cin.get();
        cin.get();
        h_done = true;
        break;
      case 4: break;
    }
    h_done = true;
    scene_c();
  }
}

void scene_i() {
  printlines();
  bool i_done = false;
  while (i_done == false){
    cout << "\n\nYou open your door and step out of your room.  You see Kara's room in front of you, a hallway leading to the elevators to your left(south), and a hallway toward the common room to your right (north).  There is a large crowd of people around the common room.\n1. Open Kara's door.\n2. Knock on Kara's door.\n3. Walk south.\n4. Walk north.\n5. Return to your room." << endl;
    int choice_i;
    cin >> choice_i;
    switch (choice_i){
      case 1: cout << "\n\nIt's locked.\nPress 'enter' to continue." << endl;
        cin.get();
        cin.get();
        break;
      case 2: cout << "\n\nShe doesn't answer\nPress 'enter' to continue." << endl;
        cin.get();
        cin.get();
        break;
      case 3: scene_j();
        i_done = true;
        break;
      case 4: scene_k();
        i_done = true;
        break;
        case 5: scene_c;
        i_done = true;
        break;
    }
  }
}


void scene_j() {
  printlines();
  cout << "\n\nYou enter an open area where you can see the washroom(south), and the elevators (east).\n1. Walk north\n2. Walk south\n3. Walk east\n4. Walk west" << endl;
  int choice_j;
  cin >> choice_j;
  switch (choice_j){
    case 1: scene_i();
      break;
    case 2: scene_m();
      break; 
    case 3:  scene_l();
      break;
    case 4:  cout << "\n\nYou hit a wall, and are knocked unconcious. You never wake up." << endl;
      exit(0);
  }
}

void scene_k() {
  printlines();
  bool k_done = false;
  while (k_done == false){
    cout << "\n\nYou are now next to Nick and Naveen's room.  \nYou are on the outer edge of the crowd of people who fill the hall surrounding the common room.  \nThey are whispering about Casey but you can't make out what anyone is saying.  \nThere is a tenseness felt throughout the hall.\n1. Open Nick and Naveen's door\n2. Knock on Nick and Naveen's door.\n3. Shove your way through the crowd to get to the common room\n4. Shove your way north through the crowd.\n5. Shove your way east through crowd." << endl;
    int choice_k;
    cin >> choice_k;
    switch (choice_k){
      case 1: cout << "\n\nYou open the door and witness a naked Callegari.  \nYou are awestruck.  \nYou faint, and hit your head on Nick's skateboard.  \nYou die." << endl;
        exit(0);
      case 2: cout << "\n\n\"Just a sec!\", you hear in a low nasally voice.  \n\"Quick Iksha, get in...\" you hear him whisper.  \nThe bathroom door slams shut.  \nNick opens the door, punches you in the nose, and shuts the door in your face.  \nPress 'enter' to continue." << endl;
        cin.get();
        cin.get();
        break;
      case 3: scene_n();
        k_done = true;
        break;
      case 4: scene_o();
        k_done = true;
        break;  
      case 5: scene_ch();
        k_done = true;
        break;
    }
  }
}

void scene_l(){
  printlines();
  bool l_done = false;
  while (l_done == false){
    cout << "\n\nYou reach a set of elevators.\nOn the wall, there is a button that, when pressed, should open the elevator.\n1. Press button\n2. Walk west" << endl;
    int choice_l;
    cin >> choice_l;
    switch (choice_l){
      case 1: cout <<  "\n\nYou press the button, yet nothing happens.\nPress 'enter' to continue." << endl;
        cin.get();
        cin.get();
        break;
      case 2: scene_j();
      l_done = true;
      break;
    }
  }
}

void scene_m(){
  printlines();
  bool m_done = false;
  while (m_done == false){
    cout << "\n\nYou enter the laundry room. There are loads of clothing in all of the washers and the driers.\nAll the loads are finished, but nobody has taken them out yet.\n1. Take clothing out of washers and dryers\n2. Look in the washers and dryers\n3. Walk north" << endl;
    int choice_m;
    cin >> choice_m;
    switch (choice_m){
      case 1: cout << "\n\nYou take all of the clothing out of the washers and driers, and throw them on the floor.\nYou look outside of the washroom and suddenly a group of band camp kids and a band counselor appears.\nSeeing that you dumped their clothes on the floor, they proceed to shove you in the washer and turn it on full cycle.\nYou die." << endl;
        exit(0);
      case 2: cout << "\n\nYou look in the washers and dryers, but see nothing but shirts, pants, underwear, and bras.\nPress 'enter' to continue." << endl;
        cin.get();
        cin.get();
        break;
      case 3:
        m_done = true;
        scene_j();
        break;
    }
  }
}
    
void scene_n() {
  printlines();
  bool n_done = false;
  while (n_done == false){
    cout << "\n\nYou make your way through the tightly packed body of people.\nEveryone is whispering until you find Naveen who is yelling, \"OH MY GOD IT IS A DEAD BODY.\"\nYour eyes dart to the middle of the room, and lock in on Casey's decapitated corpse lying on the ground.\nHe is missing a limb.\n1. Examine body\n2. Talk to Naveen\n3. Talk to Kara\n4. Leave common room" << endl;
    int choice_n;
    cin >> choice_n;
    switch (choice_n){
      case 1: cout << "\n\nCasey's head is sitting in a bowl of Jello right next to the body.\nIt has been crudely cut off, and blood is everywhere.\nPress 'enter' to continue." << endl;
        cin.get();
        cin.get();
        break;
      case 2: cout << "\n\nHe says, \"I don't know what happened but everyone is saying that you did it.  Stay away from me you psycho!\"\nPress 'enter' to continue." << endl;
        cin.get();
        cin.get();
        break;
      case 3: cout << "\n\nShe is livid.\n\"Holy fucking shit,\" she exclaims, \"what the fuck am I supposed to do with this?  Leave me alone.\"\nPress 'enter' to continue." << endl;
        cin.get();
        cin.get();
        break;
      case 4: scene_k();
        n_done = true;
        break;
    }
  }
}

    
void scene_o() {
  printlines();
  bool o_done = false;
  while (o_done == false){
    cout << "\n\nYou shove your way through the mass of people, and reach Bo and Jorge's Room.\n1. Open Bo and Jorge's door\n2. Knock on Bo and Jorge's door\n3. Walk north\n4. Walk south" << endl;
    int choice_o;
    cin >> choice_o;
    switch (choice_o){
      case 1: cout << "\n\nIt is locked.\nPress 'enter' to continue." << endl;
        cin.get();
        cin.get();
        break;
      case 2: cout << "\n\nYou knock on the door, but nobody answers.\nAll you can hear is the muffled sound of Jorge's new single \"Mr. Bo You!!\" blaring in the room.\nPress 'enter' to continue." << endl;
        cin.get();
        cin.get();
        break;
      case 3: scene_p();
        o_done = true;
        break;
      case 4: scene_k();
        o_done = true;
        break;
    }
  }
}
    
      
void scene_p() {
  printlines();
  bool p_done = false;
  while (p_done == false){
    cout << "\n\nYou reach Nimesh and Sampath's room.\n1. Knock on Nimesh and Sampath's door.\n2. Walk north.\n3. Walk south." << endl;
    int choice_p;
    cin >> choice_p;
    switch (choice_p){
      case 1: cout << "\n\n You knock, but nobody answers.\nYou remember that they both went out to play table tennis at the gym.\nPress 'enter' to continue." << endl;
        cin.get();
        cin.get();
        break;
      case 2: scene_z();
        p_done = true;
        break;
      case 3: scene_o();
        p_done = true;
        break;
    }
  }
}

void scene_q() {
  printlines();
  bool q_done = false;
  while (q_done == false){
    cout << "\n\nYou reach Nidhi and Richa's room.\n1. Knock on Nidhi and Richa's door.\n2. Walk north.\n3. Walk south." << endl;
    int choice_q;
    cin >> choice_q;
    switch (choice_q){
      case 1: cout << "\n\nYou knock on Nidhi and Richa's door.\nNobody answers, but the door creaks open.\nYou look inside.\nYou horrifically close the door shut, knowing that what you just saw will never leave your memory.\nPress 'enter' to continue." << endl;
        cin.get();
        cin.get();
        break;
      case 2: scene_r();
        q_done = true;
        break;
      case 3: scene_ch();
        q_done = true;
        break;
    }
  }
}

void scene_ch() {
  printlines();
  bool ch_done = false;
  while (ch_done == false){
    cout << "\n\nYou reach Charlie's room.\n1. Knock on Charlie's door.\n2. Walk north.\n3. Walk west." << endl;
    int choice_ch;
    cin >> choice_ch;
    switch (choice_ch){
      case 1: cout << "\n\nYou knock on Charlie's door.\nNobody answers; you remember that he is in the common room.\nPress 'enter' to continue." << endl;
        cin.get();
        cin.get();
        break;
      case 2: scene_q();
        ch_done = true;
        break;
      case 3: scene_k();
        ch_done = true;
        break;
    }
  }
}


void scene_r() {
  printlines();
  bool r_done = false;
  while (r_done == false){
    cout << "\n\nYou reach Arya and Priya's room.\n1. Knock on Arya and Priya's door.\n2. Walk north.\n3. Walk south." << endl;
    int choice_r;
    cin >> choice_r;
    switch (choice_r){
      case 1: cout << "\n\nYou knock on Arya and Priya's door. Nothing happens. You assume that they are in the crowd checking out what happened in the common room.\nPress 'enter' to continue." << endl;
        cin.get();
        cin.get();
        break;
      case 2: scene_s();
        r_done = true;
        break;
      case 3: scene_q();
        r_done = true;
        break;
    }
  }
}

void scene_s() {
  printlines();
  bool s_done = false;
  while (s_done == false){
    cout << "\n\nYou reach Rachel and Julia's room.\n1. Knock on Rachel and Julia's door.\n2. Walk north.\n3. Walk south." << endl;
    int choice_s;
    cin >> choice_s;
    switch (choice_s){
      case 1: cout << "\n\nYou knock on Rachel and Julia's door. Rachel opens the door, and Julia runs outside the room, screaming \"DIE BY MY SCORPION!\" \nShe takes a scorpion she stole from the King building and throws it on you. \nThe scorpion stings you, and after paralysis overcomes you, you die." << endl;
        exit(0);
      case 2: scene_t();
        s_done = true;
        break;
      case 3: scene_r();
        s_done = true;
        break;
    }
  }
}

void scene_t() {
  printlines();
  bool t_done = false;
  while (t_done == false){
    cout << "\n\nYou reach Emily Cheng and Jacqueline's room.\n1. Knock on Emily Cheng and Jacqueline's door.\n2. Walk north.\n3. Walk south.\n4. Walk west." << endl;
    int choice_t;
    cin >> choice_t;
    switch (choice_t){
      case 1: cout << "\n\nYou knock on Emily Cheng and Jacqueline's door.\nYou hear them scream that they are busy with work.\nPress 'enter' to continue." << endl;
        cin.get();
        cin.get();
        break;
      case 2: scene_u();
        t_done = true;
        break;
      case 3: scene_s();
        t_done = true;
        break;
      case 4: scene_v();
        t_done = true;
        break;
    }
  }
}

void scene_u() {
  printlines();
  bool u_done = false;
  while (u_done == false){
    cout << "\n\nYou pass a hallway and reach Devi and Alyson's room.\n1. Knock on Devi and Alyson's door.\n2. Walk north.\n3. Walk south." << endl;
    int choice_u;
    cin >> choice_u;
    switch (choice_u){
      case 1: cout << "\n\nYou knock on the door, but nobody answers. They are probably checking out what happened in the common room, you assume.\nPress 'enter' to continue." << endl;
        cin.get();
        cin.get();
        break;
      case 2: scene_w();
        u_done = true;
        break;
      case 3: scene_t();
        u_done = true;
        break;
    }
  }
}


void scene_v() {
  printlines();
  bool v_done = false;
  while (v_done == false){
    cout << "\n\nYou reach Brandon and Shashanks's room.\n1. Knock on Brandon and Shashank's door.\n2. Walk north.\n3. Walk south.\n4. Walk east." << endl;
    int choice_v;
    cin >> choice_v;
    switch (choice_v){
      case 1: cout << "\n\nThe door opens, as usual.\nBrandon and Shashank are not in the room, and neither are their matresses.\nYou hear crickets chirping on the floor, and when you look in their bathroom you see saran wrap covering the toilet.\nYou decide to leave, they've had enough torture.\nPress 'enter' to continue." << endl;
        cin.get();
        cin.get();
        break;
      case 2: scene_x();
        v_done = true;
        break;
      case 3: scene_aa();
        v_done = true;
        break;
      case 4: scene_t();
        v_done = true;
        break;
    }
  }
}




void scene_w() {
  printlines();
  bool w_done = false;
  while (w_done == false){
    cout << "\n\nYou reach Kiara and Bianca's room.\n1. Knock on Kiara and Bianca's door.\n2. Walk north.\n3. Walk south." << endl;
    int choice_w;
    cin >> choice_w;
    switch (choice_w){
      case 1: cout << "\n\nYou knock on the door, and Kiara opens the door.\nShe is in a shark onesie.\nYou tell her about what happened in the common room, and she frantically runs down the hall to check it out.\nBianca then comes out of the room.\nYou ask if she wants to check it out, and she bellows, \"I don't need to check anything out. I'm FUCKING FABULOUS.\"\nShe slams the door on you.\nPress 'enter' to continue." << endl;
        cin.get();
        cin.get();
        break;
      case 2: scene_ab();
        w_done = true;
        break;
      case 3: scene_u();
        w_done = true;
        break;
    }
  }
}

void scene_x() {
  printlines();
  bool x_done = false;
  while (x_done == false){
    cout << "\n\nYou reach Chris and Amit's room.\n1. Knock on Chris and Amit's door.\n2. Walk north.\n3. Walk south." << endl;
    int choice_x;
    cin >> choice_x;
    switch (choice_x){
      case 1: cout << "\n\nYou knock on Chris and Amit's door, and Chris rushes out of the room.\nHe runs into a wall, hits his head, and dies.\nPress 'enter' to continue." << endl;
        cin.get();
        cin.get();
        break;
      case 2: scene_y();
        x_done = true;
        break;
      case 3: scene_v();
        x_done = true;
        break;
    }
  }
}


void scene_y() {
  printlines();
  bool y_done = false;
  while (y_done == false){
    cout << "\n\nYou reach Gabriel and Ryan's room. There is a black sock hanging from the doorknob\n1. Knock on Gabriel and Ryan's door.\n2. Take sock off of doorknob.\n3. Walk north.\n4. Walk south." << endl;
    int choice_y;
    cin >> choice_y;
    switch (choice_y){
      case 1: cout << "\n\nYou knock on the door, and Ryan opens it.\nHe sees the black sock, and screams, \"It was you doing the sock prank all along?! Gabe, come here!\" Gabe comes and they both proceed to shoving socks up your throat until you suffocate.\nYou die." << endl;
        exit(0);
      case 2: cout << "\n\nYou remove the sock from the doorknob and notice it is strangely heavy.\nYou reach into the sock and pull out a key.\nWhat could it unlock?\nPress 'enter' to continue." << endl;
        cin.get();
        cin.get();
        key = true;
        break;
      case 3: scene_aj();
        y_done = true;
        break;
      case 4: scene_x();
        y_done = true;
        break;
    }
  }
}


void scene_z() {
  printlines();
  bool z_done = false;
  while (z_done == false){
    cout << "\n\nYou reach Munir and Ari's room.\n1. Knock on Munir and Ari's door.\n2. Walk north.\n3. Walk south." << endl;
    int choice_z;
    cin >> choice_z;
    switch (choice_z){
      case 1: cout << "\n\nYou knock on the door, and hear Munir wail 'I'm coming!'" << endl;
        scene_za();
        z_done = true;
        break;
      case 2: scene_aa();
        z_done = true;
        break;
      case 3: scene_p();
        z_done = true;
        break;
    }
  }
}

void scene_za() {
  printlines();
  cout << "\n\n\nAfter a few seconds, the door creaks open.\n'What do you want?' Muninr asks.\nWhat do you say?\n1. \"Do you know what's going on?\"\n2. Kick Munir in the cast and run into his room\n3. \"Nevermind.\" " << endl;
  int choice_z;
  cin >> choice_z;
  switch (choice_z) {
    case 1: cout << "\n\nMunir says, \"I have no idea. I'm too drugged up on painkillers.\"\nHe closes the door.  \nPress 'enter' to continue." << endl;
      cin.get();
      cin.get();
      scene_z();
      break;
    case 2: cout << "\n\nYou kick Munir's cast, and he goes down with a scream.\nAfter you run into his room, you realize that Ari has awoken from his slumber and seen what you did.\nHe uses his gymnist skills on you to snap your neck clean. \nYou die." << endl;
      exit(0);
    case 3: cout << "\n\nThe door closes.  \nPress 'enter' to continue." << endl;
      cin.get();
      cin.get();
      scene_z();
      break;
  }
    
  
  
}


void scene_aa() {
  printlines();
  bool aa_done = false;
  while (aa_done == false){
    cout << "\n\nYou reach Mitchell and Ian's room.\n1. Knock on Mitchell and Ian's door.\n2. Walk north.\n3. Walk south." << endl;
    int choice_aa;
    cin >> choice_aa;
    switch (choice_aa){
      case 1: cout << "\n\nYou knock, and you hear Mitchell yell, 'I'm practicing right now!'\nHe is playing a birthday tune to celebrate Ian's 43rd birthday.\nPress 'enter' to continue." << endl;
        cin.get();
        cin.get();
        break;
      case 2: scene_v();
        aa_done = true;
        break;
      case 3: scene_z();
        aa_done = true;
        break;
    }
  }
}


void scene_ab() {
  printlines();
  bool ab_done = false;
  while (ab_done == false){
    cout << "\n\nYou reach Anli and Iksha's room.\nYou are near the entrance to the emergency staircase.\n1. Knock on ANli and Iksha's door.\n2. Walk north.\n3. Walk south.\n4. Open door to the stairs." << endl;
    int choice_ab;
    cin >> choice_ab;
    switch (choice_ab){
      case 1: cout << "\n\n You knock on their door, and Anli comes out in a shark onesie.\nYou tell her about the common room situation, and she gets on her belly and waddles down to check it out.\nIksha is gone (you can guess where she is).\nPress 'enter' to continue." << endl;
        cin.get();
        cin.get();
        break;
      case 2: scene_ac();
        ab_done = true;
        break;
      case 3: scene_w();
        ab_done = true;
        break;
      case 4: 
        if (key == true){
          cout << "\n\nIt opens...\n(press 'enter' to continue...if you dare...)" << endl;
          cin.get();
          cin.get();
          ab_done = true;
          scene_gg();
          break;
        }
        else {
          cout << "\n\nIt's locked. You need a key you dingus.\nPress 'enter', loser." << endl;
            cin.get();
            cin.get();
            break;
        }
    }
  }
}

void scene_ac() {
  printlines();
  bool ac_done = false;
  while (ac_done == false){
    cout << "\n\nYou reach the end ot the hallway. You see Catherine and Emily Luo's room.\n1. Knock on Catherine and Emily Luo's door.\n2. Walk west.\n3. Walk south." << endl;
    int choice_ac;
    cin >> choice_ac;
    switch (choice_ac){
      case 1: cout << "\n\nYou knock on Catherine an Emily Luo's door. Nobody answers.\nYou suspect that they are either checking out the common room or off somewhere playing their instruments.\nPress 'enter' to continue." << endl;
        cin.get();
        cin.get();
        break;
      case 2: scene_ad();
        ac_done = true;
        break;
      case 3: scene_ab();
        ac_done = true;
        break;
    }
  }
}


void scene_ad() {
  printlines();
  bool ad_done = false;
  while (ad_done == false){
    cout << "\n\nYou reach Sreya and Dierdre's room.\n1. Knock on Sreya and Dierdre's door.\n2. Walk west.\n3. Walk east." << endl;
    int choice_ad;
    cin >> choice_ad;
    switch (choice_ad){
      case 1: cout << "\n\nYou knock on their door, but nobody answers.\nRight then you remember that you have your counselor evaluation form in your pocket.\nYou take it out of your pocket and slide it under their door.\nHopefully she doesn't mistake you for someone else, or worse...\nPress 'enter' to continue." << endl;
        cin.get();
        cin.get();
        break;
      case 2: scene_ae();
        ad_done = true;
        break;
      case 3: scene_ac();
        ad_done = true;
        break;
    }
  }
}

void scene_ae() {
  printlines();
  bool ae_done = false;
  while (ae_done == false){
    cout << "\n\nYou reach Serena and Olivia's room.\n1. Knock on Serena and Olivia's door.\n2. Walk west.\n3. Walk east." << endl;
    int choice_ae;
    cin >> choice_ae;
    switch (choice_ae){
      case 1: cout << "\n\nYou knock on Serena and Olivia's door.\nOlivia comes to answer, but when she opens the door a picture of Puneet falls out of her pocket and onto the floor.\nShe quickly picks it up, blushes, and slams the door closed.\nPress 'enter' to continue." << endl;
        cin.get();
        cin.get();
        break;
      case 2: scene_af();
        ae_done = true;
        break;
      case 3: scene_ad();
        ae_done = true;
        break;
    }
  }
}

void scene_af() {
  printlines();
  bool af_done = false;
  while (af_done == false){
    cout << "\n\nYou reach Natalie's room.\n1. Knock on Natalie's door.\n2. Walk west.\n3. Walk east." << endl;
    int choice_af;
    cin >> choice_af;
    switch (choice_af){
      case 1: cout << "\n\nYou knock on Natalie's door. Nobody answers.\nYou remember that she is in the common room.\nPress 'enter' to continue." << endl;
        cin.get();
        cin.get();
        break;
      case 2: scene_ag();
        af_done = true;
        break;
      case 3: scene_ae();
        af_done = true;
        break;
    }
  }
}


void scene_ag() {
  printlines();
  bool ag_done = false;
  while (ag_done == false){
    cout << "\n\nYou reach Puneet and Joshua's room.\n1. Knock on Puneet and Joshua's door.\n2. Walk south.\n3. Walk east." << endl;
    int choice_ag;
    cin >> choice_ag;
    switch (choice_ag){
      case 1: cout << "\n\nYou knock on their door.\nNoone answers, but the door is unlocked.\nYou enter the room, but there is nothing of interest but a vast expanse of turbans of different colors.\nYou exit the room.\nPress 'enter' to continue." << endl;
        cin.get();
        cin.get();
        break;
      case 2: scene_ai();
        ag_done = true;
        break;
      case 3: scene_af();
        ag_done = true;
        break;
    }
  }
}

void scene_ai() {
  printlines();
  bool ai_done = false;
  while (ai_done == false){
    cout << "\n\nYou reach Feeney's room. There is an ominous presense in the air.\n1. Knock on Feeney's door.\n2. Walk north.\n3. Walk south." << endl;
    int choice_ai;
    cin >> choice_ai;
    switch (choice_ai){
      case 1: cout << "\n\nYou knock on his door. All you can hear is an echo.\nPress 'enter' to continue." << endl;
        cin.get();
        cin.get();
        break;
      case 2: scene_ag();
        ai_done = true;
        break;
      case 3: scene_aj();
        ai_done = true;
        break;
    }
  }
}

void scene_aj() {
  printlines();
  bool aj_done = false;
  while (aj_done == false){
    cout << "\n\nYou reach Alex and Victor's room.\n1. Knock on Alex and Victor's door.\n2. Walk north.\n3. Walk south." << endl;
    int choice_aj;
    cin >> choice_aj;
    switch (choice_aj){
      case 1: cout << "\n\nYou knock, and Victor immediately opens the door.\nHe savagely grabs you by the shoulders, and takes a bite out of your neck.\nAs you're on the floor bleeding to death, Alex comes out of the room.\nAll he says to you is 'Troo', grins, and walks away.\nYou die." << endl;
        exit(0);
      case 2: scene_ai();
        aj_done = true;
        break;
      case 3: scene_y();
        aj_done = true;
        break;
    }
  }
}


void scene_gg() {
  printlines();
  cout << "\n\nThe staircase is eerie, and you hear the door being you close and lock.\nYou hear sounds of a monstorous beast.\nYou see a shape hunched in the corner down the stairs, eating Casey's limb.\nHe turns to you, and you recognize him as Feeney.\nHe drops the limb, and runs straight towards you.\n1. Run up the stairs.\n2. Run down the stairs.\n3. Attack Feeney.\n4. Unlock door and run out of staircase.\n5. Sit and pray.\n6. Challenge Feeney to super smash bros brawl." << endl;
  int choice_gg;
  cin >> choice_gg;
  switch (choice_gg){
    case 1: cout << "\n\nYou try to run up the stairs, but to your demise, it is a dead end.\nFeeney creeps up the stairs, and faces you.\nHe backs you into a corner, and proceeds to beating you down to a pulp.\nYou die." << endl;
      exit(0);
    case 2: cout << "\n\nYou attempt to run down the stairs, obviously forgetting that Feeney is blocking your exit down.\nHe stops you, and then stops your heart after he rips it out of your chest.\nYou die." << endl;
      exit(0);
    case 3: cout << "\n\n You attack Feeney.\nFoolish.\nHe takes your wimpy swing and deflects it.\nHe pounces on you, and like a Tiger, he tears you apart limb by limb.\nYou die." << endl;
      exit(0);
    case 4: cout << "\n\nInstictively, you turn around and try to unlock the door. Just as your key enters the keyhole, Feeney's claws enter your butthole." << endl;
      if (ButtPlug == true){
        cout << "\n\nLuckily, your buttplug came in handy, and his claws did not rip you open. You run out of the staircase." << endl;
       scene_end();
       break;
      
      }
    case 5: cout << "\n\nYou close your eyes, sit down, and pray to be saved.\nLet's just say that your eyes never open again." << endl;
      exit(0);
      
    case 6: cout << "\n\nYou tell Feeney that you challenge him to a game of brawl, but he clearly has no idea what your talking about.\nHe primatively takes you by the head and slams you against a wall.\nHe then proceeds to eating the brains out of your broken skull.\nYou die." << endl;
      exit(0);
  }
}


void scene_end() {
  printlines();
    cout << "\n\nWhen you exit the staircase, you are no longer in southgate.  \nYou feel your nipples harden as you notice the cold emptiness around you. \nYou are in outer space.  \nFeeney is not far behind and when you see him emerge, you freeze.  \nHe unzips his skin and Mike from Southgate emerges.  \nMike begins to laugh maniacally and grow larger and larger. \nHe eventually gets so massive that you can't see anything but Mike.  \nHe becomes so large that he implodes and turns into a supermassive black hole.  \nYou are sucked into the vortex, and torn to shreds.\nPress enter to continue." << endl;
    cin.get();
    cin.get();
    printlines();
    cout << "\n\nLocation: Hogwarts\n\nYou wake up.\nIt is your first day of school.\nYou walk into the Slytherin common room, hoping to make some new wizard friends.\nHopefully, nobody will be able to tell that you are muggle-born.\nTime passes and you've met nobody, so you decide you should head to your first class.\nYou're excited to meet your first teacher, Professor Feeney." << endl;
    cin.get();
    cin.get();
}
