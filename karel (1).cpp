// Functions for various actions with the Karel Bot

function main(){
   while(leftIsClear()){
      dropSingleRow();
      returnToStart();
      goToNextRow();
      secondRow();
      returnToStart();
      goToNextRow();
      }
   if(frontIsBlocked()){
      turnRight();
      }
   if(frontIsClear()){
      move();
      if(noBeepersPresent()){  
         turnAround();
         move();
         turnAround();
         dropSingleRow();
         }
      }
}

function dropSingleRow(){
   putBeeper();
   while(frontIsClear()){
      move();
      if(frontIsClear()){
         move();
         putBeeper();
         }
      }
}

function returnToStart(){
   turnAround();
   while(frontIsClear()){
      move();
      }
   turnAround();
}

function goToNextRow(){
   turnLeft();
   if(frontIsClear()){
      move();
      turnRight();
      }
}

function secondRow(){
   if(frontIsClear()){
      move();
      dropSingleRow();
   }
}
Maze:
// Utilizes maze-finding algorithm of "hugging" the left wall
function main(){
   while(noBeepersPresent()){
      if(leftIsClear()){
         turnLeft();
      }
      else{
         while(frontIsBlocked()){
            turnRight();
            }
         }
      move();
      }
   }
Midpoint:
//starts by placing all beepers, then picking them up 1 by 1 until the center.
function main(){
   while(frontIsClear()){
      putBeeper();
      move();
      }
   putBeeper();
   turnAround();
   
   while(beepersPresent()){
      if(frontIsClear()){
         move();
         if(noBeepersPresent()){
            turnAround();
            move();
            pickBeeper();
            move();
            }
         }
      else{
         pickBeeper();
         turnAround();
         move();
         }
      }
   turnAround();
   move();
   putBeeper();
}