import React from 'react';

const useSemiPersistentState = (key,initialValue)=> 
{
  const [value,setValue] = React.useState(localStorage.getItem(key)||initialValue);
  React.useEffect(()=>{
    localStorage.setItem(key,value);
  },[value]);
  return [value,setValue];
};





const App = () => {
  const stories = [
    {
    title: 'React',
    url: 'https://reactjs.org/',
    author: 'Jordan Walke',
    num_comments: 3,
    points: 4,
    objectID: 0,
    },
    {
    title: 'Redux',
    url: 'https://redux.js.org/',
    author: 'Dan Abramov, Andrew Clark,vasanth',
    num_comments: 2,
    points: 5,
    objectID: 1,
    },
    ];

   

const [searchTerm,setSearchTerm] = useSemiPersistentState('search','React');

  const handleSearch = event =>{
    setSearchTerm(event.target.value);
   
  }
const searchedStories = stories.filter(story=>
  story.title.toLowerCase()
  .includes(searchTerm.toLowerCase())
)
  return (
    <div>
     <h1>Hacker Stories</h1>
     <hr/>
<Search search={searchTerm} onSearch={handleSearch}/>
<p>
  Sarching for <strong>{searchTerm}</strong>
</p>
<hr/>

 <List list={searchedStories}/>
 
    </div>
  );
}

const Search =({search,onSearch}) =>{
  
 return(
  <>
  <label htmlFor="search">Search:</label>
<input id="search" 
type="text" 
value={search}
onChange={onSearch}
/>
</>);
}


const List=({list})=>
  list.map(({objectID,...item})=> <Item key={objectID}{...item} />);
  
const Item =({
  title,
  url,
  author,
  num_comments,
  points
}) => {
  return(
      <div >
        <span><a href={url}> {title}</a></span>
       <span>{author}</span>
       <span>{num_comments}</span>
       <span>{points}</span>
        </div>);
}









export default App;