###post_02: DATA source & architecture

####1st DATA source : google plus  API 
##### (updated 2014-03-24)

-randomwalks plus page 
 1. total number of followers
 2. each follower’s public profile
 3. each follower’s activity moment / timecode (when he/she plus the page)
 4. each follower’s geocode

- plus.people.list
- plus.people.public profile
- plus.people.get (for a full person resource)

parameters 

####2nd DATA source : lucky draw item API (RFID or other applicapable sensors)
refer this prototype to hardware TEST 2nd.

- approx. 10 different kind of items
 1. match which follower gets which item (with RFID sensor or color sensor)
 2. drawn time
 3. drawn geocode

===================================================

####prototyping 
1.access/parsing google plus API (Authorize requests using OAuth 2.0)

```
#code sample : to get users list and profile
people: function() {
      var request = gapi.client.plus.people.list({ 
        'userId': 'me', 
        'collection': 'visible'
      });
      request.execute(function(people) {
        $('#visiblePeople').empty(); //비우고
        $('#visiblePeople').append('Number of people visible to this app: ' +
            people.totalItems + '<br/>'); //Number of people visible to this app 
        for (var personIndex in people.items) {
          person = people.items[personIndex];
          $('#visiblePeople').append('<img src="' + person.image.url + '">'); // follower picture
          $('#visiblePeople').append('Name : '+ person.displayName +'<br/>'); //follower name
          $('#visiblePeople').append('Id : '+person.id+'<br/>'); //follower id 
        } 
          
      });
      
    }

#code sample : parsing TEST of a real user information

profile: function(){
      var request = gapi.client.plus.people.get( {'userId' : 'me'} ); 
      // used plus.people.get 
      request.execute( function(profile) {
        $('#profile').empty();
        if (profile.error) {
          $('#profile').append(profile.error);
          return;
        }
        $('#profile').append(
            $('<p><img src=\"' + profile.image.url + '\"></p>'));
        $('#profile').append(
            $('<p> Display Name : ' + profile.displayName + '<br />Current Location: ' + 
            profile.placesLived[0].value + '<br />Introduction: ' + profile.aboutMe + '</p>')); // display name and location
        
      });
    }

# for location of a user
Since location information is as users filled, so we need other API to get longitude and latitude.

```

2.access/parse RFID sensored DATA  (will be saved on a local machine)
Refer this prototype to Hardware TEST 2nd.

