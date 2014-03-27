###post_02: DATA source & architecture

####1st DATA source : google plus  API 
##### (updated 2014-03-26)

###### As far as we tested, google plus API is providing data related to "I" not "me", 
which means...
people who I am circling / not who circled "me"
people who I am following / not who following "me"

we have tested
1. To get a list of followers (who follwing my page) : 
we have to make a partnership with google to access any data related to a certain (my) google plus page. We decide to hold this solution because we can't find any specific information of available data according to partnership.

2. Instead, we concluded a final solution like this:
a) create a customized web page describing randomwalks activities and mission.
b) update this page with data of randomwalks plus page news.
c) add a google plus button on the customized page, and visitors can re-post it ("plus") after login with their google account.
d) This activity will spread randomwalks information out, which we consider as "support".
d) Once visitors post randomwalks information on thier plus page, we can track
 - a profile of new user/ and list of users (screen name, location, posting time etc)
 - compare number of posting ("plus") and number of randomwalks plus page followers

![data flow plan](https://raw.github.com/randomwalks/devart-template/master/project_images/dataFlow.jpg "data flow plan")



-------------------------------------------

##### (test to  2014-03-21)

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

####prototyping 
1.access/parsing google plus API (Authorize requests using OAuth 2.0)
![people list pulling TEST](https://raw.github.com/randomwalks/devart-template/master/project_images/backEnd_pullingListPeople_000.jpg "people list pulling TEST")

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

